// ============================================================
// 函数名称: sub_429820
// 虚拟地址: 0x429820
// WARP GUID: 9c087da0-3bd9-505c-9071-a0c6a9c48894
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410524, sub_42a1dc, sub_410580, sub_4301dc, sub_4301c8
// [被调用的父级函数]: sub_4298b4
// ============================================================

int32_tsub_429820()
{
    // 第一条实际指令: void* esi = *(data_531764 + 4)
    void* esi = *(data_531764 + 4)
    
    if (esi != 0 && *(esi + 0x17c) != 0 && *(esi + 0x140) != 0 && sub_4301c8(esi) != 0)
        int32_t eax_4 = sub_4301c8(esi)
        int32_t eax_7
        
        if (eax_4 == 1)
            eax_7 = sub_410524(*(esi + 0x140), 0)
        
        if (eax_4 != 1 || eax_7 != *(data_531764 + 0x38))
            for (HANDLE i = sub_42a1dc(data_531764 + 0xc); i != 0; i = *(i + 0x24))
                if (esi == i)
                    break
                
                int32_t eax_12 = sub_410580(*(esi + 0x140), i)
                
                if (eax_12 != 0xffffffff)
                    return sub_4301dc(esi, eax_12)
    
    return 0
}
