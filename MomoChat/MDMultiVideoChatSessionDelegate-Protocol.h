//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDMultiVideoChatSession;

@protocol MDMultiVideoChatSessionDelegate <NSObject>
- (void)didLongPressedVideoView:(MDMultiVideoChatSession *)arg1;
- (void)didTappedVideoView:(MDMultiVideoChatSession *)arg1;
- (void)didTapBottomLookersView;
- (void)cameraSwichButtonTapped;
- (void)joinButtonTapped;
- (void)inviteButtonTapped;
- (void)muteVideoButtonTapped;
- (void)settingButtonTapped;
- (void)quitButtonTapped;
@end
