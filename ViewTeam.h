//
//  ViewTeam.h
//  SoccerManager
//
//  Created by NIMESH DESAI on 11/17/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AbstractScene.h"

@interface ViewTeam : AbstractScene
{
	@private
	//Menu Entities
	NSMutableArray* menuEntities;
	
	//Font
	AngelCodeFont* font;
	
	//accelerometer
	UIAccelerationValue _accelerometer[3];
}

// Returns the current accelerometer value for the given axis.  The axis is the location
// within an array in which the value is stored.  0 = x, 1 = y, 2 = z
- (float)accelerometerValueForAxis:(uint)aAxis;

@end
