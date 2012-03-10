//
//  ResultController.h
//  GhostGame
//
//  Created by  on 12-2-2.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PlayerCard;

@interface ResultController : UIViewController

@property (retain, nonatomic) IBOutlet UILabel *resultDescriptionLabel;
@property (retain, nonatomic) IBOutlet UILabel *promptLabel;
@property (retain, nonatomic) IBOutlet UIButton *continueGameButton;
@property (retain, nonatomic) UIButton *guessRightButton;
@property (retain, nonatomic) UIButton *guessWrongButton;
@property (retain, nonatomic) UIButton *quitButton;
@property (retain, nonatomic) UIButton *againButton;
@property (retain, nonatomic) PlayerCard *currentPlayerCard;
@property (assign, nonatomic) NSInteger result;
@property (retain, nonatomic) UIImageView *winnerImageView;
@property (retain, nonatomic) UIImageView *lightImageView;
@property (assign, nonatomic) NSInteger lightIndex;
@property (retain, nonatomic) UIImageView *dialogBoxImageView;
@property (retain, nonatomic) IBOutlet UIImageView *continueImageView;
@property (retain, nonatomic) IBOutlet UILabel *continueLabel;

- (IBAction)continueGame:(id)sender;

- (id)initWithCurrentPlayerCard:(PlayerCard *)currentPlayerCardValue;
- (void)showResult;


@end
