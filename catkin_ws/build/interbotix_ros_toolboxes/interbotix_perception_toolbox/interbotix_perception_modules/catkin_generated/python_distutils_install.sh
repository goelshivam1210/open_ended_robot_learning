#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/bharat/catkin_ws/src/interbotix_ros_toolboxes/interbotix_perception_toolbox/interbotix_perception_modules"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/bharat/catkin_ws/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/bharat/catkin_ws/install/lib/python3/dist-packages:/home/bharat/catkin_ws/build/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/bharat/catkin_ws/build" \
    "/usr/bin/python3" \
    "/home/bharat/catkin_ws/src/interbotix_ros_toolboxes/interbotix_perception_toolbox/interbotix_perception_modules/setup.py" \
     \
    build --build-base "/home/bharat/catkin_ws/build/interbotix_ros_toolboxes/interbotix_perception_toolbox/interbotix_perception_modules" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/bharat/catkin_ws/install" --install-scripts="/home/bharat/catkin_ws/install/bin"
