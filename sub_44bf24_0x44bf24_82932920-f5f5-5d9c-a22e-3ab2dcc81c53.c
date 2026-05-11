// ============================================================
// 函数名称: sub_44bf24
// 虚拟地址: 0x44bf24
// WARP GUID: 82932920-f5f5-5d9c-a22e-3ab2dcc81c53
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: InvalidateRect
// [内部子函数调用]: sub_42b778, sub_42fc10, sub_403df8, sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_44bf24(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_1c = ebx
    int32_t esi
    int32_t var_20 = esi
    int32_t edi
    int32_t var_24 = edi
    int32_t var_18 = 0
    int32_t* var_28 = &var_4
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(arg1 + 0x205) == 0)
        sub_42b778(0, &var_18)
    
    if (*(arg1 + 0x205) == 0 && var_18 == 0)
        int32_t esi_1 = arg1[0x80]
        
        if (*(arg1 + 0x1f9) != 0)
            esi_1 += arg1[0x7f]
        
        if (*(arg1 + 0x1fa) != 0)
            esi_1 += arg1[0x7f]
        
        if (esi_1 s> 0)
            RECT rect
            rect.right = arg1[0xe]
            rect.bottom = arg1[0xf]
            
            if (*(*(arg2 + 8) + 0x10) != rect.right)
                rect.top = 0
                rect.left = rect.right - esi_1 - 1
                InvalidateRect(sub_4318d0(arg1), &rect, 0xffffffff)
                esp = &ExceptionList
            
            if (*(*(arg2 + 8) + 0x14) != rect.bottom)
                rect.left = 0
                rect.top = rect.bottom - esi_1 - 1
                InvalidateRect(sub_4318d0(arg1), &rect, 0xffffffff)
                esp = &ExceptionList
    else
        (*(*arg1 + 0x74))()
        var_8
        esp = &var_8
    
    sub_42fc10(arg1, arg2)
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_44c01b
    int32_t* result = &var_18
    sub_403df8(result)
    return result
}
