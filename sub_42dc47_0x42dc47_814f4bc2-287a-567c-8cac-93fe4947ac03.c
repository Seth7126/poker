// ============================================================
// 函数名称: sub_42dc47
// 虚拟地址: 0x42dc47
// WARP GUID: 814f4bc2-287a-567c-8cac-93fe4947ac03
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42c754, sub_42db2c, sub_42efd0
// [被调用的父级函数]: sub_42dc00
// ============================================================

int32_t* __stdcallsub_42dc47(void* arg1 @ ebp, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: void* ebp = sub_42db2c(*(arg1 - 4))
    void* ebp = sub_42db2c(*(arg1 - 4))
    
    if (*(*(ebp - 4) + 0x24) != 0)
        sub_42c754(*(ebp - 4), 0)
    
    return sub_42efd0(*(ebp - 4))
}
