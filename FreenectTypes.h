//
//  FreenectTypes.h
//  FreenectTD
//
//  Shared enums used by the TOP and both device backends.
//

#pragma once

// How the depth map is generated
enum class depthFormatEnum {
    Raw,            // native depth camera image (512x424 on v2, 640x480 on v1)
    RawUndistorted, // v2 only: lens-undistorted depth camera image
    Registered      // depth re-projected into the color camera (1920x1080 on v2, 640x480 on v1)
};
