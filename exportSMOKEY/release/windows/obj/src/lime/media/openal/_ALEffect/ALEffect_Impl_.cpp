// Generated by Haxe 4.2.2
#include <hxcpp.h>

#ifndef INCLUDED_lime_media_openal__ALEffect_ALEffect_Impl_
#include <lime/media/openal/_ALEffect/ALEffect_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_4ccb4f4d746e2239_9__new,"lime.media.openal._ALEffect.ALEffect_Impl_","_new",0x9bfb986a,"lime.media.openal._ALEffect.ALEffect_Impl_._new","lime/media/openal/ALEffect.hx",9,0x4805d04d)
namespace lime{
namespace media{
namespace openal{
namespace _ALEffect{

void ALEffect_Impl__obj::__construct() { }

Dynamic ALEffect_Impl__obj::__CreateEmpty() { return new ALEffect_Impl__obj; }

void *ALEffect_Impl__obj::_hx_vtable = 0;

Dynamic ALEffect_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ALEffect_Impl__obj > _hx_result = new ALEffect_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ALEffect_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0051d1ab;
}

 ::Dynamic ALEffect_Impl__obj::_new( ::Dynamic handle){
            	HX_STACKFRAME(&_hx_pos_4ccb4f4d746e2239_9__new)
HXDLIN(   9)		 ::Dynamic this1 = handle;
HXDLIN(   9)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALEffect_Impl__obj,_new,return )


ALEffect_Impl__obj::ALEffect_Impl__obj()
{
}

bool ALEffect_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ALEffect_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ALEffect_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class ALEffect_Impl__obj::__mClass;

static ::String ALEffect_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	::String(null())
};

void ALEffect_Impl__obj::__register()
{
	ALEffect_Impl__obj _hx_dummy;
	ALEffect_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.media.openal._ALEffect.ALEffect_Impl_",05,ba,78,ad);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ALEffect_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ALEffect_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ALEffect_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ALEffect_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ALEffect_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace media
} // end namespace openal
} // end namespace _ALEffect
