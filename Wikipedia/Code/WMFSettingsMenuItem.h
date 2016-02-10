
#import <Mantle/Mantle.h>

typedef NS_ENUM (NSUInteger, WMFSettingsMenuItemDisclosureType){
    WMFSettingsMenuItemDisclosureType_None,
    WMFSettingsMenuItemDisclosureType_ViewController,
    WMFSettingsMenuItemDisclosureType_ViewControllerWithDisclosureText,
    WMFSettingsMenuItemDisclosureType_ExternalLink,
    WMFSettingsMenuItemDisclosureType_Switch
};

@interface WMFSettingsMenuItem : MTLModel

@property (nonatomic, copy, readonly) NSString* title;

@property (nonatomic, copy, readonly) NSString* iconName;

@property (nonatomic, copy, readonly) UIColor* iconColor;

@property (nonatomic, assign, readonly) WMFSettingsMenuItemDisclosureType disclosureType;

@property (nonatomic, copy, readonly) NSString* disclosureText;

- (instancetype)initWithTitle:(NSString*)title
                     iconName:(NSString*)iconName
                     iconColor:(UIColor*)iconColor
               disclosureType:(WMFSettingsMenuItemDisclosureType)disclosureType
               disclosureText:(NSString*)disclosureText;
@end
