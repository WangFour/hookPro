//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface AliDetailPriceEntity : TBJSONModel
{
    _Bool _lineThrough;	// 8 = 0x8
    float _priceMoney;	// 12 = 0xc
    NSString *_priceText;	// 16 = 0x10
    NSString *_priceTitle;	// 24 = 0x18
    NSString *_priceUnit;	// 32 = 0x20
    NSString *_priceChar;	// 40 = 0x28
    NSString *_priceDesc;	// 48 = 0x30
    NSString *_priceColor;	// 56 = 0x38
    NSString *_priceTitleColor;	// 64 = 0x40
}

@property(nonatomic) float priceMoney; // @synthesize priceMoney=_priceMoney;
@property(nonatomic) _Bool lineThrough; // @synthesize lineThrough=_lineThrough;
@property(copy, nonatomic) NSString *priceTitleColor; // @synthesize priceTitleColor=_priceTitleColor;
@property(copy, nonatomic) NSString *priceColor; // @synthesize priceColor=_priceColor;
@property(copy, nonatomic) NSString *priceDesc; // @synthesize priceDesc=_priceDesc;
@property(copy, nonatomic) NSString *priceChar; // @synthesize priceChar=_priceChar;
@property(copy, nonatomic) NSString *priceUnit; // @synthesize priceUnit=_priceUnit;
@property(copy, nonatomic) NSString *priceTitle; // @synthesize priceTitle=_priceTitle;
@property(copy, nonatomic) NSString *priceText; // @synthesize priceText=_priceText;
- (void).cxx_destruct;

@end
