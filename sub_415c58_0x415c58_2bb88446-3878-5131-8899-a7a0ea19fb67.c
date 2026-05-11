// ============================================================
// 函数名称: sub_415c58
// 虚拟地址: 0x415c58
// WARP GUID: 2bb88446-3878-5131-8899-a7a0ea19fb67
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_403828
// [被调用的父级函数]: sub_496fb0, sub_4970c0, sub_415c2c
// ============================================================

int32_t __stdcallsub_415c58(LPARAM arg1 @ eax, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: *(arg1 + 0x28) = 0
    *(arg1 + 0x28) = 0
    *(arg1 + 0x20) = arg2
    *(arg1 + 0x24) = arg3
    SendMessageA(data_53164c, 0x8fff, 0, arg1)
    int32_t result = *(arg1 + 0x28)
    
    if (result == 0)
        return result
    
    sub_403828()
    noreturn
}
