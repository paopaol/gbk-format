#include "mocker_vas.h"

#include <Windows.h>
#include <Winsock2.h>
#include <gmock/gmock.h>
#include <stdio.h>

using namespace ::testing;

//gbk中文
int main(int argc, char *argv[]) {
  auto mocker = TestMocker::getMocker();
               //gbk中文
  EXPECT_CALL(*mocker, bind(::testing::_, ::testing::_, ::testing::_))
      .WillOnce(Return(500))
      .WillOnce(Return(200))
      .WillOnce(Return(300));


  //auto vasMocker = hhtest::MockerVas::getMocker();

  //EXPECT_CALL(*vasMocker, GetVersion())
	 // .WillOnce(Return(vas::Version(1, 2, 3)))
	 // .WillOnce(Return(vas::Version(3, 2, 1)));

  printf("%d\n", ::bind(1, nullptr, 1));
  printf("%d\n", ::bind(1, nullptr, 1));
  printf("%d\n", ::bind(1, nullptr, 1));

  auto v123 = vas::fd::GetVersion();
  auto v321 = vas::fd::GetVersion();
  return 0;
}