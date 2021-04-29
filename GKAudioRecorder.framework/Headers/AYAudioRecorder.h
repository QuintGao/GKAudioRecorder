//
//  AYAudioRecorder.h
//  GKAudioRecorder
//
//  Created by gaokun on 2018/12/29.
//  Copyright © 2018 gaokun. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, AYREC_STATUS) {
    AYREC_OFF,
    AYREC_ON
};

@interface AYAudioRecorder : NSObject

// output录制状态
@property (nonatomic) AYREC_STATUS outputRecStatus;

// input录制状态
@property (nonatomic) AYREC_STATUS inputRecStatus;

//--------------------------------------------------------------------------------
//
// Description  - AYAudioRecorder的单例模式
// Para         - NULL
// Return       - instancetype
// Author       - QuintGao
//
+ (instancetype) shareInstance;
//--------------------------------------------------------------------------------



//--------------------------------------------------------------------------------
//
// Description  - 开启并注册后台
// Para         - NULL
// Return       - NULL
// Author       - QuintGao
//
- (void)startAndRegisterBGR;
//--------------------------------------------------------------------------------



//--------------------------------------------------------------------------------
//
// Description  - 关闭并取消注册后台
// Para         - NULL
// Return       - NULL
// Author       - QuintGao
//
- (void)stopAndUnRegisterBGR;
//--------------------------------------------------------------------------------



//--------------------------------------------------------------------------------
//
// Description  - 播放音乐
// Para         - url(NSURL)，url
// Return       - NULL
// Author       - QuintGao
//
- (void)playMusicWithUrl:(NSURL *)url;
//--------------------------------------------------------------------------------



//--------------------------------------------------------------------------------
//
// Description  - 从指定进度播放音乐
// Para         - 1.url(NSURL)，url
//                2.progress(float)，进度
// Return       - NULL
// Author       - QuintGao
//
- (void)playMusicWithUrl:(NSURL *)url withCurrentTime:(float)time;
//--------------------------------------------------------------------------------

//--------------------------------------------------------------------------------
//
// Description  - 从指定进度播放音乐
// Para         - 1.url(NSURL)，url
//                2.time(float)，当前时间
//                3.completion(block),播放完成回调
// Return       - NULL
// Author       - QuintGao
//
- (void)playMusicWithUrl:(NSURL *)url withCurrentTime:(float)time completion:(void(^)(void))completion;
//--------------------------------------------------------------------------------



//--------------------------------------------------------------------------------
//
// Description  - 获取当前播放进度
// Para         - NULL
// Return       - float (0.0f ~ 1.0f)
// Author       - QuintGao
//
- (float)playMusicGetCurrentPro;
//--------------------------------------------------------------------------------



//--------------------------------------------------------------------------------
//
// Description  - 暂停音乐
// Para         - url(NSURL)，url
// Return       - NULL
// Author       - QuintGao
//
- (void)pauseMusicWithUrl:(NSURL *)url;
//--------------------------------------------------------------------------------



//--------------------------------------------------------------------------------
//
// Description  - 继续播放音乐（对应暂停）
// Para         - url(NSURL)，url
// Return       - NULL
// Author       - QuintGao
//
- (void)resumeMusicWithUrl:(NSURL *)url;
//--------------------------------------------------------------------------------



//--------------------------------------------------------------------------------
//
// Description  - 移除背景音乐
// Para         - url(NSURL)，url
// Return       - NULL
// Author       - QuintGao
//
- (void)removeMusicWithUrl:(NSURL *)url;
//--------------------------------------------------------------------------------



//--------------------------------------------------------------------------------
//
// Description  - 调节音乐音量
// Para         - value(float)，音量(0.0 ~ 1.0)
// Return       - NULL
// Author       - QuintGao
//
- (void)setVolumeOfBKMusic:(float)value;
//--------------------------------------------------------------------------------



//--------------------------------------------------------------------------------
//
// Description  - 播放音效
// Para         - urlStr(NSString)，url
// Return       - NULL
// Author       - QuintGao
//
- (void)playEffectWithUrl:(NSString *)urlStr;
//--------------------------------------------------------------------------------



//--------------------------------------------------------------------------------
//
// Description  - 播放并录制音效
// Para         - urlStr(NSString)，url
// Return       - NULL
// Author       - QuintGao
//
- (void)playAndRecordEffectWithUrl:(NSString *)urlStr;
//--------------------------------------------------------------------------------



//--------------------------------------------------------------------------------
//
// Description  - 打开Output录制（播放的音乐）
// Para         - NULL
// Return       - NULL
// Author       - QuintGao
//
- (void)openOutputRecord;
//--------------------------------------------------------------------------------



//--------------------------------------------------------------------------------
//
// Description  - 关闭Output录制（播放的音乐）
// Para         - NULL
// Return       - NULL
// Author       - QuintGao
//
- (void)closeOutputRecord;
//--------------------------------------------------------------------------------



//--------------------------------------------------------------------------------
//
// Description  - 打开Input录制
// Para         - NULL
// Return       - NULL
// Author       - QuintGao
//
- (void)openInputRecord;
//--------------------------------------------------------------------------------



//--------------------------------------------------------------------------------
//
// Description  - 关闭话筒
// Para         - NULL
// Return       - NULL
// Author       - QuintGao
//
- (void)closeInputRecord;
//--------------------------------------------------------------------------------



//--------------------------------------------------------------------------------
//
// Description  - 完成录音
// Para         - NULL
// Return       - NULL
// Author       - QuintGao
//
- (void)finishRecording;
//--------------------------------------------------------------------------------



//--------------------------------------------------------------------------------
//
// Description  - 试听录制的音乐
// Para         - value(float)，进度(0.0 ~ 1.0)
// Return       - NULL
// Author       - QuintGao
//
- (void)testPlayRecordedAudioWithProgress:(float)value;
//--------------------------------------------------------------------------------


//--------------------------------------------------------------------------------
//
// Description  - 试听录制的音乐
// Para         - value(float)，进度(0.0 ~ 1.0)
// Para         - completion, 播放完成回调
// Return       - NULL
// Author       - QuintGao
//
- (void)testPlayRecordedAudioWithProgress:(float)value completion:(void(^)(void))completion;
//--------------------------------------------------------------------------------


//--------------------------------------------------------------------------------
//
// Description  - 停止试听录制的音乐
// Para         - NULL
// Return       - NULL
// Author       - QuintGao
//
- (void)stopTestPlayRecordedAudio;
//--------------------------------------------------------------------------------



//--------------------------------------------------------------------------------
//
// Description  - 保存(m4a)
// Para         - name(NSString)，文件名
// Return       - NULL
// Author       - QuintGao
//
- (void)saveRecordAudioWithFileName:(NSString *)name
                          completed:(void (^)(void))success
                            failure:(void (^)(NSError *))failure;
//--------------------------------------------------------------------------------

//--------------------------------------------------------------------------------
//
// Description  - 保存(m4a)
// Para         - path(NSString)，文件路径
// Return       - NULL
// Author       - QuintGao
//
- (void)saveRecordAudioWithFilePath:(NSString *)filePath
                          completed:(void (^)(NSDictionary *))success
                            failure:(void (^)(NSError *))failure;
//--------------------------------------------------------------------------------



//--------------------------------------------------------------------------------
//
// Description  - 剪切
// Para         - 1.bValue(float)，起始位置(0.0 ~ 1.0)
// Return       - NULL
// Author       - QuintGao
//
- (void)cutWithLocBeginValue:(float)bValue
                   completed:(void (^)(void))success
                     failure:(void (^)(NSError *))failure;
//--------------------------------------------------------------------------------



//--------------------------------------------------------------------------------
//
// Description  - 重新录制
// Para         - NULL
// Return       - NULL
// Author       - QuintGao
//
- (void)resetRecorder;
//--------------------------------------------------------------------------------



//--------------------------------------------------------------------------------
//
// Description  - 获取草稿
// Para         - NULL
// Return       - NSArray[
//                          NSDictionary{
//                              draftid : xxx           // 草稿id
//                              name : xxx              // 文件名
//                              rectime : xxx           // 录制时间
//                              duration : xxx          // 长度(时分秒)
//                              size : xxx              // 大小(kb、mb、gb)
//                              userid : xxx            // 用户id
//                              path : xxxx             // 文件地址
//                          }
//                        ]
// Author       - QuintGao
//
+ (NSArray *)getDrafts;
//--------------------------------------------------------------------------------



//--------------------------------------------------------------------------------
//
// Description  - 删除草稿
// Para         - idStr(NSString),获取草稿 中返回
// Return       - BOOL
// Author       - QuintGao
//
+ (BOOL)removeDraftWithID:(NSString *)idStr;
//--------------------------------------------------------------------------------



//--------------------------------------------------------------------------------
//
// Description  - 判断是否已存在
// Para         - name(NSString),草稿名
// Return       - BOOL
// Author       - QuintGao
//
+ (BOOL)ifItemIsExistWithName:(NSString *)name;
//--------------------------------------------------------------------------------




//--------------------------------------------------------------------------------
//                                  私有播放器
//--------------------------------------------------------------------------------
//
// Description  - 私有播放器,用于 相对论、试听、现场报道等
// Para         - urlStr(NSString),音频网络url或本地地址
// Return       - NULL
// Author       - QuintGao
//
- (void)privatePlayWithUrlStr:(NSString *)urlStr;
//--------------------------------------------------------------------------------


//
// Description  - 私有播放器,用于 相对论、试听、现场报道等
// Para         - url(NSURL),音频网络url、本地音频、iPod Library音频
// Return       - NULL
// Author       - QuintGao
//
- (void)privatePlayWithUrl:(NSURL *)url;
//--------------------------------------------------------------------------------


//--------------------------------------------------------------------------------
//
// Description  - 停止播放
// Para         - urlStr(NSString),音频网络url或本地地址
// Return       - NULL
// Author       - QuintGao
//
- (void)privateStopPlay;
//--------------------------------------------------------------------------------



//--------------------------------------------------------------------------------
//
// Description  - 获取当前播放进度
// Para         - NULL
// Return       - float (0.0f ~ 1.0f)
// Author       - QuintGao
//
- (float)privateGetCurrentPro;
//--------------------------------------------------------------------------------

// 播放完成block
@property (nonatomic, copy) void(^privateCompleteBlock)(void);

- (void)setPrivateCompleteBlock:(void (^)(void))privateCompleteBlock;



//--------------------------------------------------------------------------------
//
// Description  - 获取input音轨比例
// Para         - NULL
// Return       - float (0.0f ~ 1.0f)
// Author       - QuintGao
//
- (float)inputTrackPro;
//--------------------------------------------------------------------------------



//--------------------------------------------------------------------------------
//
// Description  - 获取output音轨比例
// Para         - NULL
// Return       - float (0.0f ~ 1.0f)
// Author       - QuintGao
//
- (float)outputTrackPro;
//--------------------------------------------------------------------------------



//--------------------------------------------------------------------------------
//                                  录制相对论
//--------------------------------------------------------------------------------
//
// Description  - 开始录制相对论
// Para         - NULL
// Return       - NULL
// Author       - QuintGao
//
- (BOOL)startRecordRelativity;
//--------------------------------------------------------------------------------



//--------------------------------------------------------------------------------
//
// Description  - 结束录制相对论
// Para         - NULL
// Return       - NULL
// Author       - QuintGao
//
- (void)finishRecordRelativity;
//--------------------------------------------------------------------------------


//--------------------------------------------------------------------------------
//
// Description  - 获取相对论input音轨比例
// Para         - NULL
// Return       - float（0.0f ~ 0.1f）
// Author       - QuintGao
//
- (float)relativityInputTrackPro;


//--------------------------------------------------------------------------------
//
// Description  - 试听相对论
// Para         - NULL
// Return       - NULL
// Author       - QuintGao
//
- (void)playRelativity;
//--------------------------------------------------------------------------------

// 播放完成block
@property (nonatomic, copy) void(^relativityCompleteBlock)(void);

- (void)setRelativityCompleteBlock:(void (^)(void))relativityCompleteBlock;



//--------------------------------------------------------------------------------
//
// Description  - 暂停相对论
// Para         - NULL
// Return       - NULL
// Author       - QuintGao
//
- (void)pauseRelativity;
//--------------------------------------------------------------------------------



//--------------------------------------------------------------------------------
//
// Description  - 续播相对论
// Para         - NULL
// Return       - NULL
// Author       - QuintGao
//
- (void)resumeRelativity;
//--------------------------------------------------------------------------------



//--------------------------------------------------------------------------------
//
// Description  - 转码
// Para         - NULL
// Return       - NULL
// Author       - QuintGao
//
- (void)revertRelativitySoundWithStateCompleted:(void (^)(NSString *))success
                                        failure:(void (^)(NSError *))failure;
//--------------------------------------------------------------------------------

@end
