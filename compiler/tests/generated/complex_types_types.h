
#pragma once

#include <bond/core/bond_version.h>

#if BOND_VERSION < 0x0520
#error This file was generated by a newer version of the Bond compiler and is incompatible with your version of the Bond library.
#endif

#if BOND_MIN_CODEGEN_VERSION > 0x0800
#error This file was generated by an older version of the Bond compiler and is incompatible with your version of the Bond library.
#endif

#include <bond/core/config.h>
#include <bond/core/containers.h>
#include <bond/core/nullable.h>
#include <bond/core/bonded.h>
#include <bond/core/blob.h>


namespace tests
{
    
    struct Foo
    {
        
        Foo()
        {
        }

        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated copy ctor OK
        Foo(const Foo&) = default;
#endif
        
#if !defined(BOND_NO_CXX11_DEFAULTED_MOVE_CTOR)
        Foo(Foo&&) = default;
#elif !defined(BOND_NO_CXX11_RVALUE_REFERENCES)
        Foo(Foo&&)
        {
        }
#endif
        
        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated operator= OK
        Foo& operator=(const Foo&) = default;
#endif

        bool operator==(const Foo&) const
        {
            return true;
        }

        bool operator!=(const Foo& other) const
        {
            return !(*this == other);
        }

        void swap(Foo&)
        {
            using std::swap;
        }

        struct Schema;

    protected:
        void InitMetadata(const char*, const char*)
        {
        }
    };

    inline void swap(::tests::Foo& left, ::tests::Foo& right)
    {
        left.swap(right);
    }

    struct Bar;

    
    struct ComplexTypes
    {
        std::list<int8_t> li8;
        std::set<bool> sb;
        std::vector< ::bond::blob> vb;
        ::bond::nullable<float> nf;
        std::map<std::string, std::wstring> msws;
        ::bond::bonded< ::tests::Foo> bfoo;
        std::map<double, std::list<std::vector< ::bond::nullable< ::bond::bonded< ::tests::Bar> > > > > m;
        
        ComplexTypes()
        {
        }

        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated copy ctor OK
        ComplexTypes(const ComplexTypes&) = default;
#endif
        
#if !defined(BOND_NO_CXX11_DEFAULTED_MOVE_CTOR)
        ComplexTypes(ComplexTypes&&) = default;
#elif !defined(BOND_NO_CXX11_RVALUE_REFERENCES)
        ComplexTypes(ComplexTypes&& other)
          : li8(std::move(other.li8)),
            sb(std::move(other.sb)),
            vb(std::move(other.vb)),
            nf(std::move(other.nf)),
            msws(std::move(other.msws)),
            bfoo(std::move(other.bfoo)),
            m(std::move(other.m))
        {
        }
#endif
        
        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated operator= OK
        ComplexTypes& operator=(const ComplexTypes&) = default;
#endif

        bool operator==(const ComplexTypes& other) const
        {
            return true
                && (li8 == other.li8)
                && (sb == other.sb)
                && (vb == other.vb)
                && (nf == other.nf)
                && (msws == other.msws)
                && (bfoo == other.bfoo)
                && (m == other.m);
        }

        bool operator!=(const ComplexTypes& other) const
        {
            return !(*this == other);
        }

        void swap(ComplexTypes& other)
        {
            using std::swap;
            swap(li8, other.li8);
            swap(sb, other.sb);
            swap(vb, other.vb);
            swap(nf, other.nf);
            swap(msws, other.msws);
            swap(bfoo, other.bfoo);
            swap(m, other.m);
        }

        struct Schema;

    protected:
        void InitMetadata(const char*, const char*)
        {
        }
    };

    inline void swap(::tests::ComplexTypes& left, ::tests::ComplexTypes& right)
    {
        left.swap(right);
    }
} // namespace tests

