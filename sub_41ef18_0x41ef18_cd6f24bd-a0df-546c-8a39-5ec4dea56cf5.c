// ============================================================
// 函数名称: sub_41ef18
// 虚拟地址: 0x41ef18
// WARP GUID: cd6f24bd-a0df-546c-8a39-5ec4dea56cf5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_417c44, sub_41d10c, sub_41e2f0, sub_41d214, sub_41e5a0, sub_41e2e0
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_41ef18(int32_t* arg1, HGDIOBJ arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t* ebx = arg1
    void* result = ebx[8]
    
    if (arg2 != *(result + 0x10))
        if (arg2 != 0 || *(result + 4) != 1)
            sub_41e2e0(ebx)
            sub_41e2f0(ebx)
            void var_5c
            __builtin_memcpy(&var_5c, result + 0x18, 0x54)
            void* var_6c_2 = &var_5c
            *(result + 0x10)
            HPALETTE eax_4 = sub_41d214(*(result + 8), nullptr)
            int32_t* var_6c_3 = &var_4
            int32_t (* var_70_3)() = j_sub_40353c
            TEB* fsbase
            struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList
            ebx = sub_41e5a0(ebx, eax_4, arg2, nullptr, *(result + 0x70), &var_5c)
            fsbase->NtTib.ExceptionList = ExceptionList
        else
            sub_417c44(*(result + 0x10))
            *(result + 0x10) = 0
        
        void* eax_7 = ebx[8]
        ebp_1 = sub_41d10c(*(eax_7 + 0x14), arg2, eax_7 + 0x18)
        *(ebx + 0x1a) = 1
        result = (*(*ebx + 0x10))()
    
    *ebp_1
    return result
}
