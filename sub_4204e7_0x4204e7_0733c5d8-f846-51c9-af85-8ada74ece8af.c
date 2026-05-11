// ============================================================
// 函数名称: sub_4204e7
// 虚拟地址: 0x4204e7
// WARP GUID: 0733c5d8-f846-51c9-af85-8ada74ece8af
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetWindowRect, GetWindowPlacement, IsIconic
// [内部子函数调用]: sub_42046c, sub_4202fc
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_4204e7(char arg1, int32_t arg2, char* arg3 @ eax, void* arg4 @ ebp, uint16_t* arg5 @ esi, int32_t* arg6 @ edi, HWND arg7, char arg8)
{
    // 第一条实际指令: *arg6 -= 1
    *arg6 -= 1
    *arg3 += arg3.b
    *(arg4 + 0x6f) += arg1
    int32_t eflags
    __outsb(arg2.w, *arg5, arg5, eflags)
    int32_t esi_1 = *(arg6 + (arg4 << 1) + 0x72) * 0x6d6f7246
    int32_t var_4 = arg2
    int32_t eflags_1
    int32_t gsbase
    int16_t temp0
    temp0, eflags_1 = __arpl_memw_gpr16(*(gsbase + arg3 * 2 + 0x55), esi_1.w)
    *(gsbase + arg3 * 2 + 0x55) = temp0
    int32_t* ebp = &var_4
    int32_t var_38 = esi_1
    int32_t result
    
    if (data_5316ed == 0)
        arg3.b = 1
        struct _EXCEPTION_REGISTRATION_RECORD** eax
        int32_t ebx_1
        eax, ebx_1, ebp = sub_4202fc(arg3.b, data_5316c8, sub_42057b+5)
        data_5316c8 = eax
        result = data_5316c8(arg7, ebx_1)
    else if ((arg8 & 3) == 0)
        var_14
        WINDOWPLACEMENT lpwndpl
        
        if (IsIconic(arg7) == 0)
            GetWindowRect(arg7, &var_14)
        else
            GetWindowPlacement(arg7, &lpwndpl)
        result = sub_42046c(&var_14, arg8)
    else
        result = 0x12340042
    
    *ebp
    return result
}
