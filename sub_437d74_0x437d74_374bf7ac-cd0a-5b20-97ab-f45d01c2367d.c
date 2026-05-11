// ============================================================
// 函数名称: sub_437d74
// 虚拟地址: 0x437d74
// WARP GUID: 374bf7ac-cd0a-5b20-97ab-f45d01c2367d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_437c84, sub_437490, sub_403248
// [被调用的父级函数]: sub_437dd0
// ============================================================

int32_tsub_437d74(void* arg1)
{
    // 第一条实际指令: if (*(*(arg1 - 4) + 0x20) == 0)
    if (*(*(arg1 - 4) + 0x20) == 0)
        int32_t result
        result.b = sub_437490(*(arg1 - 8)) s> 0
        return result
    
    int32_t* ebx_1 = *(*(arg1 - 4) + 0x20)
    int32_t edi
    
    if (sub_403248(ebx_1, &data_436f20) != 0 && sub_437c84(*(arg1 - 8), ebx_1, edi) != 0)
        return 0
    
    return 1
}
