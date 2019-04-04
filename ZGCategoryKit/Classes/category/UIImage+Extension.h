//
//  UIImage+Extension.h
//  Pods-ZGCategoryKit_Example
//
//  Created by 王史超 on 2019/4/4.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (Extension)

+ (instancetype)ff_imagePathWithName:(NSString *)imageName bundle:(NSString *)bundle targetClass:(Class)targetClass;

@end

NS_ASSUME_NONNULL_END
