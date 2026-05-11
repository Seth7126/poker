// ============================================================
// 函数名称: sub_4b8ae4
// 虚拟地址: 0x4b8ae4
// WARP GUID: bf603f23-a8d1-5ffa-928e-9473798c69fb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_40422c, sub_403e4c, sub_4b7714, sub_403df8
// [被调用的父级函数]: sub_4b8ae2, sub_4e548c
// ============================================================

void* __convention("regparm")sub_4b8ae4(void* arg1, int32_t arg2, char* arg3, char arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    char* var_8 = arg3
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t* esp = &var_10
    
    if (arg2.b != 0)
        void var_20
        esp = &var_20
        arg1 = sub_4033d0(arg3, arg2)
    
    sub_40422c(arg3)
    *(esp - 4) = &var_4
    *(esp - 8) = j_sub_4037f0
    TEB* fsbase
    *(esp - 0xc) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp - 0xc
    *(arg1 + 0x7e8) = 0
    *(arg1 + 0xc3d20) = arg4
    *(arg1 + 0xc3d24) = 1
    *(arg1 + 0xc3d21) = 0
    sub_403e4c(arg1 + 0xc3d1c, arg3)
    
    if (*(arg1 + 0xc3d20) == 0)
        *(arg1 + 0x62280) = 0
    else
        ebp_1 = sub_4b7714(arg1, *(arg1 + 0xc3d1c))
    
    *(arg1 + 0xc3d20) = 0
    *(arg1 + 0xc3d24) = 0
    *(arg1 + 0xc3ec0) = 0
    *(esp - 4)
    fsbase->NtTib.ExceptionList = *(esp - 0xc)
    *(esp - 4) = sub_4b8b97
    sub_403df8(&ebp_1[-1])
    return &ebp_1[-1]
}
