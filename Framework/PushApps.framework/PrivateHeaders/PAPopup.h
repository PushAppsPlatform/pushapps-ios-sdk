#import <UIKit/UIKit.h>
#import "PushApps.h"

enum PAPopupAnimation_t : NSUInteger {
    PAAnimationFromTop = 0,
    PAAnimationFromBottom,
    PAAnimationFromLeft,
    PAAnimationFromRight,
    PAAnimationCustom
};

typedef enum PAPopupAnimation_t PAPopupAnimation;

@interface PAPopup : UIView <UIWebViewDelegate>
@property PAPopupAnimation popupAnimationType;
@property NSString* URL;
@property NSDictionary* parameters;
@property id<PAPopupDelegate> delegate;

+(PAPopup*)showPopupWithSize:(CGSize)size inView:(UIView*)superView andAnimation:(PAPopupAnimation)popupAnimation andURL:(NSString*)url andParameters:(NSDictionary *)parameters;
-(void)dismiss;

@end
