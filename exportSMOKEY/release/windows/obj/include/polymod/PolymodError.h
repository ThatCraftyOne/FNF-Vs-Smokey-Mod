// Generated by Haxe 4.2.2
#ifndef INCLUDED_polymod_PolymodError
#define INCLUDED_polymod_PolymodError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(polymod,PolymodError)
HX_DECLARE_CLASS1(polymod,PolymodErrorType)

namespace polymod{


class HXCPP_CLASS_ATTRIBUTES PolymodError_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PolymodError_obj OBJ_;
		PolymodError_obj();

	public:
		enum { _hx_ClassId = 0x57955688 };

		void __construct( ::polymod::PolymodErrorType severity,::String code,::String message,::String origin);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="polymod.PolymodError")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"polymod.PolymodError"); }
		static ::hx::ObjectPtr< PolymodError_obj > __new( ::polymod::PolymodErrorType severity,::String code,::String message,::String origin);
		static ::hx::ObjectPtr< PolymodError_obj > __alloc(::hx::Ctx *_hx_ctx, ::polymod::PolymodErrorType severity,::String code,::String message,::String origin);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PolymodError_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PolymodError",12,5c,18,a4); }

		 ::polymod::PolymodErrorType severity;
		::String code;
		::String message;
		::String origin;
};

} // end namespace polymod

#endif /* INCLUDED_polymod_PolymodError */ 
