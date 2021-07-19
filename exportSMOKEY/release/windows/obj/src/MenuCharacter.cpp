// Generated by Haxe 4.2.2
#include <hxcpp.h>

#ifndef INCLUDED_CharacterSetting
#include <CharacterSetting.h>
#endif
#ifndef INCLUDED_MenuCharacter
#include <MenuCharacter.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ab0efa272e315d84_22_new,"MenuCharacter","new",0x6b6b77dc,"MenuCharacter.new","MenuCharacter.hx",22,0x28a93714)
HX_LOCAL_STACK_FRAME(_hx_pos_ab0efa272e315d84_63_setCharacter,"MenuCharacter","setCharacter",0x186f24ab,"MenuCharacter.setCharacter","MenuCharacter.hx",63,0x28a93714)
HX_LOCAL_STACK_FRAME(_hx_pos_ab0efa272e315d84_24_boot,"MenuCharacter","boot",0x8ab66936,"MenuCharacter.boot","MenuCharacter.hx",24,0x28a93714)

void MenuCharacter_obj::__construct(int x,int y,Float scale,bool flipped){
            	HX_STACKFRAME(&_hx_pos_ab0efa272e315d84_22_new)
HXLINE(  36)		this->flipped = false;
HXLINE(  40)		super::__construct(x,y,null());
HXLINE(  41)		this->flipped = flipped;
HXLINE(  43)		this->set_antialiasing(true);
HXLINE(  45)		::String library = null();
HXDLIN(  45)		::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_characters",24,49,1a,60)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  45)		this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_characters",24,49,1a,60)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE(  47)		this->animation->addByPrefix(HX_("bf",c4,55,00,00),HX_("BF idle dance white",cc,b4,ad,68),24,null(),null(),null());
HXLINE(  48)		this->animation->addByPrefix(HX_("bfConfirm",9c,6f,0e,68),HX_("BF HEY!!",40,93,04,8c),24,false,null(),null());
HXLINE(  49)		this->animation->addByPrefix(HX_("gf",1f,5a,00,00),HX_("GF Dancing Beat WHITE",f0,84,9e,e1),24,null(),null(),null());
HXLINE(  50)		this->animation->addByPrefix(HX_("dad",47,36,4c,00),HX_("Dad idle dance BLACK LINE",b5,ef,e0,8b),24,null(),null(),null());
HXLINE(  51)		this->animation->addByPrefix(HX_("spooky",eb,bd,9e,c1),HX_("spooky dance idle BLACK LINES",b4,84,b1,60),24,null(),null(),null());
HXLINE(  52)		this->animation->addByPrefix(HX_("pico",e5,e8,57,4a),HX_("Pico Idle Dance",62,48,dd,f6),24,null(),null(),null());
HXLINE(  53)		this->animation->addByPrefix(HX_("mom",cb,16,53,00),HX_("Mom Idle BLACK LINES",c7,f6,14,d1),24,null(),null(),null());
HXLINE(  54)		this->animation->addByPrefix(HX_("parents-christmas",fe,94,c5,32),HX_("Parent Christmas Idle",c8,04,64,10),24,null(),null(),null());
HXLINE(  55)		this->animation->addByPrefix(HX_("senpai",3c,df,8d,6b),HX_("SENPAI idle Black Lines",f6,9a,63,5d),24,null(),null(),null());
HXLINE(  56)		this->animation->addByPrefix(HX_("smokey",2a,f2,67,07),HX_("Smokey black linese",5d,cd,fa,03),24,null(),null(),null());
HXLINE(  58)		this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * scale)),null());
HXLINE(  59)		this->updateHitbox();
            	}

Dynamic MenuCharacter_obj::__CreateEmpty() { return new MenuCharacter_obj; }

void *MenuCharacter_obj::_hx_vtable = 0;

Dynamic MenuCharacter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuCharacter_obj > _hx_result = new MenuCharacter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool MenuCharacter_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5962df7e) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x5962df7e;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void MenuCharacter_obj::setCharacter(::String character){
            	HX_STACKFRAME(&_hx_pos_ab0efa272e315d84_63_setCharacter)
HXLINE(  64)		if ((character == HX_("",00,00,00,00))) {
HXLINE(  66)			this->set_visible(false);
HXLINE(  67)			return;
            		}
            		else {
HXLINE(  71)			this->set_visible(true);
            		}
HXLINE(  74)		this->animation->play(character,null(),null(),null());
HXLINE(  76)		 ::CharacterSetting setting = ( ( ::CharacterSetting)(::MenuCharacter_obj::settings->get(character)) );
HXLINE(  77)		this->offset->set(setting->x,setting->y);
HXLINE(  78)		Float _hx_tmp = this->get_width();
HXDLIN(  78)		this->setGraphicSize(::Std_obj::_hx_int((_hx_tmp * setting->scale)),null());
HXLINE(  79)		this->set_flipX((setting->flipped != this->flipped));
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuCharacter_obj,setCharacter,(void))

 ::haxe::ds::StringMap MenuCharacter_obj::settings;


::hx::ObjectPtr< MenuCharacter_obj > MenuCharacter_obj::__new(int x,int y,Float scale,bool flipped) {
	::hx::ObjectPtr< MenuCharacter_obj > __this = new MenuCharacter_obj();
	__this->__construct(x,y,scale,flipped);
	return __this;
}

::hx::ObjectPtr< MenuCharacter_obj > MenuCharacter_obj::__alloc(::hx::Ctx *_hx_ctx,int x,int y,Float scale,bool flipped) {
	MenuCharacter_obj *__this = (MenuCharacter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuCharacter_obj), true, "MenuCharacter"));
	*(void **)__this = MenuCharacter_obj::_hx_vtable;
	__this->__construct(x,y,scale,flipped);
	return __this;
}

MenuCharacter_obj::MenuCharacter_obj()
{
}

::hx::Val MenuCharacter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"flipped") ) { return ::hx::Val( flipped ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setCharacter") ) { return ::hx::Val( setCharacter_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MenuCharacter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"settings") ) { outValue = ( settings ); return true; }
	}
	return false;
}

::hx::Val MenuCharacter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"flipped") ) { flipped=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MenuCharacter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"settings") ) { settings=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void MenuCharacter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("flipped",42,6c,88,7f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MenuCharacter_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(MenuCharacter_obj,flipped),HX_("flipped",42,6c,88,7f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo MenuCharacter_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &MenuCharacter_obj::settings,HX_("settings",e3,7c,3d,8b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MenuCharacter_obj_sMemberFields[] = {
	HX_("flipped",42,6c,88,7f),
	HX_("setCharacter",a7,9b,21,66),
	::String(null()) };

static void MenuCharacter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuCharacter_obj::settings,"settings");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MenuCharacter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuCharacter_obj::settings,"settings");
};

#endif

::hx::Class MenuCharacter_obj::__mClass;

static ::String MenuCharacter_obj_sStaticFields[] = {
	HX_("settings",e3,7c,3d,8b),
	::String(null())
};

void MenuCharacter_obj::__register()
{
	MenuCharacter_obj _hx_dummy;
	MenuCharacter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MenuCharacter",ea,99,ab,10);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MenuCharacter_obj::__GetStatic;
	__mClass->mSetStaticField = &MenuCharacter_obj::__SetStatic;
	__mClass->mMarkFunc = MenuCharacter_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MenuCharacter_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuCharacter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuCharacter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MenuCharacter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuCharacter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuCharacter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MenuCharacter_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::haxe::ds::StringMap _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_ab0efa272e315d84_24_boot)
HXDLIN(  24)			 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  24)			_g->set(HX_("bf",c4,55,00,00), ::CharacterSetting_obj::__alloc( HX_CTX ,0,-20,((Float)1.0),true));
HXDLIN(  24)			_g->set(HX_("gf",1f,5a,00,00), ::CharacterSetting_obj::__alloc( HX_CTX ,50,80,((Float)1.5),true));
HXDLIN(  24)			_g->set(HX_("dad",47,36,4c,00), ::CharacterSetting_obj::__alloc( HX_CTX ,-15,130,null(),null()));
HXDLIN(  24)			_g->set(HX_("spooky",eb,bd,9e,c1), ::CharacterSetting_obj::__alloc( HX_CTX ,20,30,null(),null()));
HXDLIN(  24)			_g->set(HX_("pico",e5,e8,57,4a), ::CharacterSetting_obj::__alloc( HX_CTX ,0,0,((Float)1.0),true));
HXDLIN(  24)			_g->set(HX_("mom",cb,16,53,00), ::CharacterSetting_obj::__alloc( HX_CTX ,-30,140,((Float)0.85),null()));
HXDLIN(  24)			_g->set(HX_("parents-christmas",fe,94,c5,32), ::CharacterSetting_obj::__alloc( HX_CTX ,100,130,((Float)1.8),null()));
HXDLIN(  24)			_g->set(HX_("senpai",3c,df,8d,6b), ::CharacterSetting_obj::__alloc( HX_CTX ,-40,-45,((Float)1.4),null()));
HXDLIN(  24)			_g->set(HX_("smokey",2a,f2,67,07), ::CharacterSetting_obj::__alloc( HX_CTX ,0,20,((Float)1.6),null()));
HXDLIN(  24)			return _g;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_ab0efa272e315d84_24_boot)
HXDLIN(  24)		settings = ( ( ::haxe::ds::StringMap)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

