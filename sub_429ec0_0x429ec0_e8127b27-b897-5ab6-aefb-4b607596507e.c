// ============================================================
// 函数名称: sub_429ec0
// 虚拟地址: 0x429ec0
// WARP GUID: e8127b27-b897-5ab6-aefb-4b607596507e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac
// [被调用的父级函数]: sub_429f30
// ============================================================

int32_tsub_429ec0(void* arg1)
{
    // 第一条实际指令: int32_t result
    int32_t result
    result.b = *(data_531764 + 4) != 0
    
    if (*(arg1 - 1) != 0 && data_531780 == 2)
        if ((*(*data_531760 + 0x50))() != 0 || *(data_531760 + 0x90) == 0)
            result.b = 1
        else
            int32_t* eax_6 = *(data_531760 + 0x90)
            
            if (eax_6 != 0)
                result.w = 0xffc2
                return sub_4032ac(eax_6, *(data_531764 + 4), data_531760)
    
    return result
}
