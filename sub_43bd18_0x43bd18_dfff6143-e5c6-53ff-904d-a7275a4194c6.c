// ============================================================
// 函数名称: sub_43bd18
// 虚拟地址: 0x43bd18
// WARP GUID: dfff6143-e5c6-53ff-904d-a7275a4194c6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43d8ac, sub_439f30, sub_403248, sub_43bd18
// [被调用的父级函数]: sub_43c230, sub_43cc00, sub_43baf0, sub_43bd18
// ============================================================

int32_t __stdcallsub_43bd18(int32_t* arg1 @ eax, char arg2)
{
    // 第一条实际指令: if (arg2 != 0 && (arg1[0xa] != 0 || arg1[0x18] != 0))
    if (arg2 != 0 && (arg1[0xa] != 0 || arg1[0x18] != 0))
        sub_439f30(arg1)
    
    if (arg1[0x16] != 0)
        return sub_43bd18(0)
    
    int32_t* __saved_ecx_1 = arg1[1]
    char result = sub_403248(__saved_ecx_1, 0x438b44)
    
    if (result == 0)
        return result
    
    return sub_43d8ac(__saved_ecx_1)
}
