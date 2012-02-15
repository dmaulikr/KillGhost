//
//  VoteController.h
//  GhostGame
//
//  Created by  on 12-2-2.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PlayerCardManager.h"

@class PlayerCardManager;
@class LineSegment;
@class LineSegmentView;

@interface VoteController : UIViewController<UIGestureRecognizerDelegate, VoteDelegate>
{
    PlayerCardManager *_playerManager;
 //   BOOL _isVoteLine;
    BOOL _isStartInCard, _isEndInCard;
    LineSegment *_voteLine;
    LineSegmentView *_currentVoteLine;
}

@property(nonatomic, retain)PlayerCardManager *playerManager;
@property(nonatomic, retain)NSMutableArray *lineViewArray;
- (IBAction)finishVote:(id)sender;
- (id)initWithPlayerManager:(PlayerCardManager *)manager;
@end
