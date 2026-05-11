// ============================================================
// 函数名称: sub_440f88
// 虚拟地址: 0x440f88
// WARP GUID: f3f3f99f-c1f3-54c8-8682-c0a385bdbe48
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030a0, sub_403428, sub_4033d0
// [被调用的父级函数]: sub_441b0c
// ============================================================

int32_t* __fastcallsub_440f88(int32_t arg1, int32_t arg2, int32_t* arg3 @ eax, char arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_8 = ebx
    int32_t esi
    int32_t var_c = esi
    int32_t edi
    int32_t var_10 = edi
    int32_t* esp = &var_10
    
    if (arg2.b != 0)
        void var_20
        esp = &var_20
        arg3 = sub_4033d0(arg1, arg2)
    
    sub_4030a0(arg1, 0)
    arg3[1] = arg1
    arg3[6].b = arg4
    *(arg3 + 0xa) = 0x50
    arg3[2].w = (divu.dp.d(0:0x50, 0xa)).w
    arg3[7].b = 1
    arg3[8] = 0xa
    arg3[0x10] = 4
    arg3[0xf] = 0xc
    arg3[0xa] = 0x80000014
    arg3[0xb].b = 1
    arg3[0x11].b = 1
    
    if (arg2.b != 0)
        sub_403428(arg3)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    esp[2]
    esp[3]
    return arg3
}
