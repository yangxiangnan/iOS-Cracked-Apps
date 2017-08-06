//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DSmoothFunction, DiMapView, DiPointAnnotation, NSDate, SCTXMapPassengeOrderRouteRes;

@interface DSmoothNoRouteAnnimated : NSObject
{
    _Bool _isCurCycleMoving;
    _Bool _isNextCyclePointReady;
    float _stepCycle;
    DSmoothFunction *_qSmoothFunction;
    id <DiSmoothNoRouteAnnimatedDelegate> _delegate;
    DiMapView *_mapView;
    DiPointAnnotation *_driverAnnotation;
    NSDate *_curCycleEndTimePlan;
    NSDate *_beginTime;
    SCTXMapPassengeOrderRouteRes *_lastRes;
    SCTXMapPassengeOrderRouteRes *_nextRes;
    struct _DiDiRouteGPSPoint _lastDriverPoint;
}

@property(nonatomic) struct _DiDiRouteGPSPoint lastDriverPoint; // @synthesize lastDriverPoint=_lastDriverPoint;
@property(nonatomic) _Bool isNextCyclePointReady; // @synthesize isNextCyclePointReady=_isNextCyclePointReady;
@property(retain, nonatomic) SCTXMapPassengeOrderRouteRes *nextRes; // @synthesize nextRes=_nextRes;
@property(retain, nonatomic) SCTXMapPassengeOrderRouteRes *lastRes; // @synthesize lastRes=_lastRes;
@property(retain, nonatomic) NSDate *beginTime; // @synthesize beginTime=_beginTime;
@property(nonatomic) _Bool isCurCycleMoving; // @synthesize isCurCycleMoving=_isCurCycleMoving;
@property(retain, nonatomic) NSDate *curCycleEndTimePlan; // @synthesize curCycleEndTimePlan=_curCycleEndTimePlan;
@property(retain, nonatomic) DiPointAnnotation *driverAnnotation; // @synthesize driverAnnotation=_driverAnnotation;
@property(nonatomic) __weak DiMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) __weak id <DiSmoothNoRouteAnnimatedDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) DSmoothFunction *qSmoothFunction; // @synthesize qSmoothFunction=_qSmoothFunction;
@property(nonatomic) float stepCycle; // @synthesize stepCycle=_stepCycle;
- (void).cxx_destruct;
- (void)smoothMoveTo:(id)arg1 MapCanMove:(_Bool)arg2;
- (void)smoothMoveTo:(id)arg1;
- (void)pointMove:(id)arg1 annimated:(_Bool)arg2 TotalTime:(float)arg3;
- (id)initWithMapView:(id)arg1 Annotation:(id)arg2;

@end
