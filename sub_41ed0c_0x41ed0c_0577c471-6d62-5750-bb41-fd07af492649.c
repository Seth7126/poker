// ============================================================
// 函数名称: sub_41ed0c
// 虚拟地址: 0x41ed0c
// WARP GUID: 0577c471-6d62-5750-bb41-fd07af492649
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41d870, sub_41e26c, sub_41e0b0, sub_41d214, sub_41e440, sub_41e5a0, sub_41dc74, sub_41e2e0
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_41ed0c(struct _EXCEPTION_REGISTRATION_RECORD* arg1, bool arg2)
{
    // 第一条实际指令: void* result = sub_41e0b0(arg1)
    void* result = sub_41e0b0(arg1)
    
    if (arg2 != result.b)
        void* edi_1 = arg1->__offset(0x20).d
        
        if (*(edi_1 + 8) != 0 || *(edi_1 + 0x14) != 0)
            if (arg2 != 0)
                result = *(edi_1 + 8)
                
                if (result == 0 || result == *(edi_1 + 0x14))
                    sub_41e2e0(arg1)
                    sub_41e440(arg1)
                    void var_64
                    __builtin_memcpy(&var_64, edi_1 + 0x18, 0x54)
                    int32_t var_4c_1 = 0
                    bool ebx = *(edi_1 + 4) == 1
                    HPALETTE ebp_2
                    
                    if (ebx == 0)
                        ebp_2 = sub_41d870(*(edi_1 + 0x10))
                    else
                        ebp_2 = *(edi_1 + 0x10)
                    
                    void* var_68_4 = &var_64
                    *(edi_1 + 0x10)
                    HPALETTE eax_13 = sub_41d214(*(edi_1 + 0x14), nullptr)
                    
                    if (ebx == 0)
                        sub_41e5a0(arg1, eax_13, ebp_2, nullptr, *(edi_1 + 0x70), &var_64)
                    else
                        *(edi_1 + 8) = eax_13
                    
                    return arg1->Next->__offset(0x10).d()
            else
                result = *(edi_1 + 0x14)
                
                if (result == 0 || result != *(edi_1 + 8))
                    sub_41e2e0(arg1)
                    sub_41e440(arg1)
                    sub_41e26c(arg1)
                    
                    if (*(edi_1 + 4) != 1)
                        sub_41dc74(*(edi_1 + 0x10), *(edi_1 + 0x14), arg1, edi_1 + 0x18)
                    else
                        int32_t eax_4 = *(edi_1 + 0x14)
                        *(edi_1 + 0x14) = 0
                        int32_t ebp_1 = *(edi_1 + 0x10)
                        *(edi_1 + 0x10) = 0
                        void* edx
                        edx.b = *(edi_1 + 0x70)
                        sub_41e5a0(arg1, eax_4, ebp_1, nullptr, edx.b, edi_1 + 0x18)
                    
                    return arg1->Next->__offset(0x10).d()
        else if (arg2 != 1)
            *(edi_1 + 0x30) = 0x28
        else
            result = nullptr
            *(edi_1 + 0x30) = 0
    
    return result
}
