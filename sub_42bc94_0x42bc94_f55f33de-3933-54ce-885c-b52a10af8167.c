// ============================================================
// 函数名称: sub_42bc94
// 虚拟地址: 0x42bc94
// WARP GUID: f55f33de-3933-54ce-885c-b52a10af8167
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: IntersectClipRect, ReleaseDC, GetDC
// [内部子函数调用]: sub_431bcc, sub_42f6d0, sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_42bc94(int32_t* arg1)
{
    // 第一条实际指令: int32_t* result
    int32_t* result
    
    if (*(arg1 + 0x47) != 0)
    label_42bcc1:
        result = arg1
        
        if (result[9] != 0)
            result = sub_431bcc(arg1[9])
            
            if (result.b != 0)
                if ((arg1[0x10].b & 0x40) == 0)
                    (*(*arg1 + 0x74))()
                    return (*(*arg1 + 0x80))()
                
                HDC eax_7 = GetDC(sub_4318d0(arg1[9]))
                int32_t __saved_ebp
                int32_t* var_14_1 = &__saved_ebp
                int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
                TEB* fsbase
                struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
                fsbase->NtTib.ExceptionList = &ExceptionList
                int32_t top = arg1[0xd]
                int32_t left = arg1[0xc]
                IntersectClipRect(eax_7, left, top, left + arg1[0xe], top + arg1[0xf])
                sub_42f6d0(arg1[9], eax_7, arg1)
                fsbase->NtTib.ExceptionList = ExceptionList
                int32_t var_14_2 = 0x42bd87
                ExceptionList = sub_4318d0(arg1[9])
                return ReleaseDC(ExceptionList, eax_7)
    else
        result = arg1
        
        if ((result[8].b & 0x10) != 0)
            result = arg1
            
            if ((*(result + 0x41) & 4) == 0)
                goto label_42bcc1
    
    return result
}
