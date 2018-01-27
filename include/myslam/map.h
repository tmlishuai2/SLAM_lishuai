//
// Created by tmlishuai2 on 1/25/18.
//

#ifndef SLAM_LISHUAI_MAP_H
#define SLAM_LISHUAI_MAP_H
#include "myslam/common_include.h"
#include "myslam/mappoint.h"
#include "myslam/frame.h"
namespace myslam {
class Map {
 public:
  typedef shared_ptr<Map> Ptr;
  unordered_map<unsigned long, MapPoint::Ptr> map_points_;
  unordered_map<unsigned long, Frame::Ptr> keyframes_;
  Map() {}
  void insertKeyFrame(Frame::Ptr frame);
  void insertMapPoint(MapPoint::Ptr map_point);
};
}
#endif //SLAM_LISHUAI_MAP_H