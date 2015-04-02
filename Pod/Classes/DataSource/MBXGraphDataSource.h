//
//  MBXGraphDataSource.h
//  Pods
//
//  Created by Tamara Bernad on 31/03/15.
//
//

#import <Foundation/Foundation.h>
#import "MBXLineGraphVM.h"
#import "MBXAxisVM.h"
@class MBXLineGraphView;


@protocol MBXGraphDataSource <NSObject>
- (NSInteger)graphViewNumberOfGraphs:(MBXLineGraphView *)graphView;
- (NSArray *)graphVMs;
- (MBXAxisVM *)xAxisVM;
- (MBXAxisVM *)yAxisVM;
@end
