/****************************************************************************************************

 Disclaimer: IMPORTANT:  This artifact is supplied to you by Convergence Modeling LLC.
 in consideration of your agreement to the following terms, and your use, installation, 
 modification or redistribution of this acceptance constitutes acceptance of these terms.  
 If you do not agree with these terms, please do not use, install, modify or redistribute 
 this Convergence Modeling LLC artifact.
 
 In consideration of your agreement to abide by the following terms, and subject
 to these terms, Convergence Modeling LLC grants you a personal, non-exclusive license, 
 to use, reproduce, modify and redistribute this artifact, with or without
 modifications, in source and/or binary forms. 
 
 Except as expressly stated in this notice, no other rights or licenses, express or implied, 
 are granted by Convergence Modeling LLC herein, including but not limited to any patent rights 
 that may be infringed by your derivative works or by other works in which the Convergence Modeling 
 artifact may be incorporated.
 
 This artifact is provided by Convergence Modeling LLC on an "AS IS" basis. CONVERGENCE MODELING LLC 
 MAKES NO WARRANTIES, EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION THE IMPLIED WARRANTIES OF 
 NON-INFRINGEMENT, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE, REGARDING THE CONVERGENCE 
 MODELING LLC artifact OR ITS USE AND OPERATION ALONE OR IN COMBINATION WITH YOUR PRODUCTS.
 
 IN NO EVENT SHALL CONVERGENCE MODELING LLC BE LIABLE FOR ANY SPECIAL, INDIRECT, INCIDENTAL OR CONSEQUENTIAL 
 DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
 OR PROFITS; OR BUSINESS INTERRUPTION) ARISING IN ANY WAY OUT OF THE USE, REPRODUCTION, MODIFICATION AND/OR
 DISTRIBUTION OF CONVERGENCE MODELING LLC artifact, HOWEVER CAUSED AND WHETHER UNDER THEORY OF CONTRACT, TORT 
 (INCLUDING NEGLIGENCE), STRICT LIABILITY OR OTHERWISE, EVEN IF CONVERGENCE MODELING LLC HAS BEEN ADVISED OF 
 THE POSSIBILITY OF SUCH DAMAGE.

 
****************************************************************************************************/

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "JSON.h"
#import "ASIHTTPRequest.h"
#import "ASINetworkQueue.h"
#import "ASIFormDataRequest.h"




 
 

#import <SystemConfiguration/SystemConfiguration.h>


@interface ImagesViewController : UIViewController  
<
NSXMLParserDelegate
>

{

	UIViewController *parentController ;
	NSMutableDictionary *ImagesViewIds ;
	NSMutableDictionary *ImagesViewValues ;
	 
	 
	// Layout : imageLayout	 
	UIImageView *picture1Image ; 
	NSString *picture1Path ;
	
 
	UILabel *balsamiqLabel ; 
	NSString * const balsamiqText ; 
 
	UILabel *roundedPictureLabel ; 
	NSString * const roundedPictureText ; 
 
	UIImageView *picture2Image ; 
	NSString *picture2Path ;
	
 
	UIButton *infoButton ; 
	
	
}


	@property (nonatomic,assign) UIViewController *parentController ;
	@property (nonatomic,assign) NSMutableDictionary *ImagesViewIds ;
	@property (nonatomic,assign) NSMutableDictionary *ImagesViewValues ;
	
	 
	// Layout imageLayout properties
	 
	// Layout : imageLayout	 
	@property (nonatomic,retain,readonly)  UIImageView *picture1Image ;
	@property (nonatomic,retain,readonly)  NSString *picture1Path ;
	
 
	@property (nonatomic,retain,readonly)  UILabel *balsamiqLabel ; 
 
	@property (nonatomic,retain,readonly)  UILabel *roundedPictureLabel ; 
 
	@property (nonatomic,retain,readonly)  UIImageView *picture2Image ;
	@property (nonatomic,retain,readonly)  NSString *picture2Path ;
	
 
	@property (nonatomic,retain,readonly)  UIButton *infoButton ;





-(id) initWithTabBar ;
-(void) didSelectViewController;
-(NSString*)retrieveFromUserDefaultsFor:(NSString*)key ;
-(NSString *) textValueForControl:(NSString *)name ;
-(NSString *) idForControl:(NSString *)name ;
-(NSMutableDictionary *) identities ;
-(NSMutableDictionary *) values ;
-(NSString *) getDocumentDirectory;


@end