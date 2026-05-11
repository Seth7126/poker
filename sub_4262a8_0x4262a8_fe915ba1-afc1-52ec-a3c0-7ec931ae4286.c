// ============================================================
// 函数名称: sub_4262a8
// 虚拟地址: 0x4262a8
// WARP GUID: fe915ba1-afc1-52ec-a3c0-7ec931ae4286
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DrawTextA
// [内部子函数调用]: sub_4032ac, sub_404078, sub_40423c, sub_403e1c, sub_419720, sub_419b40, sub_42d69c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4262a8(int32_t* arg1, int32_t arg2, int32_t arg3, int16_t arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_24 = ebx
    int32_t esi
    int32_t var_28 = esi
    int32_t edi
    int32_t var_2c = edi
    int32_t var_20 = 0
    void* var_1c = nullptr
    RECT var_18
    __builtin_memcpy(&var_18, arg3, 0x10)
    int32_t* var_30 = &var_4
    int32_t (* var_34)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8
    
    if (*(arg1 + 0x222) == 0)
        sub_419720(arg1[0x7e], &var_18)
        
        if (arg2 s< (*(*arg1[0x7c] + 0x14))())
            var_8 = sub_42d69c(arg1, 0x824)
            int32_t ebx_1
            ebx_1.w = 0xffce
            
            if (sub_4032ac(arg1) != 0)
                var_18.right -= 2
            else
                var_18.left += 2
            
            var_18.bottom = var_8
            var_18.right = &var_18
            (*(*arg1[0x7c] + 0xc))(var_18.right, var_18.bottom, var_8)
            var_18.top = sub_404078(var_1c)
            (*(*arg1[0x7c] + 0xc))(var_18.top)
            var_18.left = sub_40423c(var_20)
            DrawTextA(sub_419b40(arg1[0x7e]), var_18.left)
    else
        RECT* eax
        eax.w = arg4
        arg1[0x89]
        arg1[0x88](eax, &var_18)
    
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4263b1
    return sub_403e1c(&var_20, 2)
}
