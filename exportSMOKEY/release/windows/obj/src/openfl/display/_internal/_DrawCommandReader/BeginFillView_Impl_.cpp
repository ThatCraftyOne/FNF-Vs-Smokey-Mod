// Generated by Haxe 4.2.2
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__internal_DrawCommandBuffer
#include <openfl/display/_internal/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandReader
#include <openfl/display/_internal/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl_display__internal__DrawCommandReader_BeginFillView_Impl_
#include <openfl/display/_internal/_DrawCommandReader/BeginFillView_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c809d3cd762f2eb4_371__new,"openfl.display._internal._DrawCommandReader.BeginFillView_Impl_","_new",0x0da27465,"openfl.display._internal._DrawCommandReader.BeginFillView_Impl_._new","openfl/display/_internal/DrawCommandReader.hx",371,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_c809d3cd762f2eb4_380_get_color,"openfl.display._internal._DrawCommandReader.BeginFillView_Impl_","get_color",0xc5578036,"openfl.display._internal._DrawCommandReader.BeginFillView_Impl_.get_color","openfl/display/_internal/DrawCommandReader.hx",380,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_c809d3cd762f2eb4_387_get_alpha,"openfl.display._internal._DrawCommandReader.BeginFillView_Impl_","get_alpha",0x9c91b631,"openfl.display._internal._DrawCommandReader.BeginFillView_Impl_.get_alpha","openfl/display/_internal/DrawCommandReader.hx",387,0x29f77eb3)
namespace openfl{
namespace display{
namespace _internal{
namespace _DrawCommandReader{

void BeginFillView_Impl__obj::__construct() { }

Dynamic BeginFillView_Impl__obj::__CreateEmpty() { return new BeginFillView_Impl__obj; }

void *BeginFillView_Impl__obj::_hx_vtable = 0;

Dynamic BeginFillView_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BeginFillView_Impl__obj > _hx_result = new BeginFillView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BeginFillView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x780a9b9c;
}

 ::openfl::display::_internal::DrawCommandReader BeginFillView_Impl__obj::_new( ::openfl::display::_internal::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_c809d3cd762f2eb4_371__new)
HXDLIN( 371)		 ::openfl::display::_internal::DrawCommandReader this1 = d;
HXDLIN( 371)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BeginFillView_Impl__obj,_new,return )

int BeginFillView_Impl__obj::get_color( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_c809d3cd762f2eb4_380_get_color)
HXDLIN( 380)		return this1->buffer->i->__get(this1->iPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BeginFillView_Impl__obj,get_color,return )

Float BeginFillView_Impl__obj::get_alpha( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_c809d3cd762f2eb4_387_get_alpha)
HXDLIN( 387)		return this1->buffer->f->__get(this1->fPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BeginFillView_Impl__obj,get_alpha,return )


BeginFillView_Impl__obj::BeginFillView_Impl__obj()
{
}

bool BeginFillView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_color") ) { outValue = get_color_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { outValue = get_alpha_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *BeginFillView_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *BeginFillView_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class BeginFillView_Impl__obj::__mClass;

static ::String BeginFillView_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_color",ba,cd,05,8e),
	HX_("get_alpha",b5,03,40,65),
	::String(null())
};

void BeginFillView_Impl__obj::__register()
{
	BeginFillView_Impl__obj _hx_dummy;
	BeginFillView_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal._DrawCommandReader.BeginFillView_Impl_",ea,5f,95,e8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BeginFillView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BeginFillView_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< BeginFillView_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BeginFillView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BeginFillView_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
} // end namespace _DrawCommandReader
