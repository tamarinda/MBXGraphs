/*
 
 Copyright (c) 2015 tamarabernad <tamara.bernad@gmail.com>
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 
 */

#import <UIKit/UIKit.h>
#import "MBXAxisVM.h"
#import "MBXGraphDataSource.h"
typedef enum
{
    kDirectionVertical,
    kDirectionHorizontal
    
}MBXGRaphAxisDirection;

@protocol MBXGraphAxisDelegate;

@interface MBXGraphAxis : UIView

@property (nonatomic) MBXGRaphAxisDirection direction;
@property (nonatomic, weak)   id <MBXGraphDataSource> dataSource;
@property (nonatomic, weak)   id <MBXGraphAxisDelegate> delegate;

- (void)reload;
@end

@protocol MBXGraphAxisDelegate <NSObject>

@required
- (UIView *) MBXGraphAxis:(MBXGraphAxis *)graphAxis ViewForValue:(NSNumber *)value;
@optional
- (NSInteger) MBXGraphAxisTicksWidth:(MBXGraphAxis *)graphAxis;
- (NSInteger) MBXGraphAxisTicksHeight:(MBXGraphAxis *)graphAxis;
- (UIColor *) MBXGraphAxisColor:(MBXGraphAxis *)graphAxis;

@end
