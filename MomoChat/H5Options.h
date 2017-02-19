//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface H5Options : NSObject
{
    _Bool _showTitleBar;
    _Bool _showToolBar;
    _Bool _showLoading;
    _Bool _readTitle;
    _Bool _pullRefresh;
    _Bool _showProgress;
    _Bool _gestureBack;
    _Bool _canPullDown;
    _Bool _showOptionMenu;
    int _backgroundColor;
    NSString *_url;
    NSString *_defaultTitle;
    NSString *_closeButtonText;
    NSString *_backBehavior;
    NSString *_toolbarMenu;
    NSString *_defaultSubtitle;
}

@property(nonatomic) _Bool showOptionMenu; // @synthesize showOptionMenu=_showOptionMenu;
@property(nonatomic) _Bool canPullDown; // @synthesize canPullDown=_canPullDown;
@property(nonatomic) _Bool gestureBack; // @synthesize gestureBack=_gestureBack;
@property(nonatomic) int backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSString *defaultSubtitle; // @synthesize defaultSubtitle=_defaultSubtitle;
@property(nonatomic) _Bool showProgress; // @synthesize showProgress=_showProgress;
@property(retain, nonatomic) NSString *toolbarMenu; // @synthesize toolbarMenu=_toolbarMenu;
@property(nonatomic) _Bool pullRefresh; // @synthesize pullRefresh=_pullRefresh;
@property(retain, nonatomic) NSString *backBehavior; // @synthesize backBehavior=_backBehavior;
@property(nonatomic) _Bool readTitle; // @synthesize readTitle=_readTitle;
@property(retain, nonatomic) NSString *closeButtonText; // @synthesize closeButtonText=_closeButtonText;
@property(nonatomic) _Bool showLoading; // @synthesize showLoading=_showLoading;
@property(nonatomic) _Bool showToolBar; // @synthesize showToolBar=_showToolBar;
@property(nonatomic) _Bool showTitleBar; // @synthesize showTitleBar=_showTitleBar;
@property(retain, nonatomic) NSString *defaultTitle; // @synthesize defaultTitle=_defaultTitle;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)description;
- (id)normalize:(id)arg1;
- (id)initWithOptions:(id)arg1 overrides:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end
