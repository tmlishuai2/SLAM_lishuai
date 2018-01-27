//
// Created by tmlishuai2 on 1/25/18.
//

#ifndef SLAM_LISHUAI_CONFIG_H
#define SLAM_LISHUAI_CONFIG_H
#include "myslam/common_include.h"
namespace myslam {
class Config {
 private:
  static std::shared_ptr<Config> config_;
  cv::FileStorage file_;

  Config() {}
 public:
  ~Config();
  static void setParameterFile(const std::string& filename);
  template <typename T>
      static T get(const std::string& key) {
    return T(Config::config_->file_[key]);
  }
};
}
#endif //SLAM_LISHUAI_CONFIG_H
