// ============================================================
// 函数名称: sub_431344
// 虚拟地址: 0x431344
// WARP GUID: 6d1c6553-ed13-5eb4-a946-1eb6aac200c1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetWindowPos, GetWindowPlacement, SetWindowPlacement, IsIconic
// [内部子函数调用]: sub_4032ac, sub_42aebc, sub_431bcc, sub_42b180
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_431344(int32_t arg1, int32_t arg2, int32_t* arg3 @ eax, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: if (arg2 == arg3[0xc] && arg1 == arg3[0xd] && arg5 == arg3[0xe] && arg4 == arg3[0xf])
    if (arg2 == arg3[0xc] && arg1 == arg3[0xd] && arg5 == arg3[0xe] && arg4 == arg3[0xf])
        return arg4
    
    char eax_3 = sub_431bcc(arg3)
    HWND var_50
    BOOL eax_5
    
    if (eax_3 != 0)
        var_50 = arg3[0x53]
        eax_5 = IsIconic(var_50)
    
    if (eax_3 == 0 || eax_5 != 0)
        arg3[0xc] = arg2
        arg3[0xd] = arg1
        arg3[0xe] = arg5
        arg3[0xf] = arg4
        
        if (sub_431bcc(arg3) != 0)
            int32_t var_30 = 0x2c
            var_50 = &var_30
            GetWindowPlacement(arg3[0x53], var_50)
            void var_40
            sub_42b180(arg3, &var_40)
            void var_14
            __builtin_memcpy(&var_14, &var_40, 0x10)
            var_50 = &var_30
            SetWindowPlacement(arg3[0x53], var_50)
    else
        var_50 = 0x14
        SetWindowPos(arg3[0x53], nullptr, arg2, arg1, arg5, arg4, var_50)
    
    sub_42aebc(arg3)
    int32_t* ebx
    ebx.w = 0xffd5
    return sub_4032ac(arg3)
}
