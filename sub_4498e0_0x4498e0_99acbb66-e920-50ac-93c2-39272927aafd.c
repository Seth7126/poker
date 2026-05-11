// ============================================================
// 函数名称: sub_4498e0
// 虚拟地址: 0x4498e0
// WARP GUID: 99acbb66-e920-50ac-93c2-39272927aafd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: IsWindowEnabled, IsWindowVisible
// [内部子函数调用]: sub_44722c, sub_447240, sub_431bcc, sub_4318d0
// [被调用的父级函数]: sub_4499c8
// ============================================================

BOOLsub_4498e0()
{
    // 第一条实际指令: BOOL result = sub_447240(data_5317dc)
    BOOL result = sub_447240(data_5317dc)
    
    if (result - 1 s>= 0)
        int32_t esi_2 = result
        int32_t edi_1 = 0
        int32_t i
        
        do
            int32_t* eax_2 = sub_44722c(data_5317dc, edi_1)
            result = sub_431bcc(eax_2)
            
            if (result.b != 0)
                result = IsWindowVisible(sub_4318d0(eax_2))
                
                if (result != 0)
                    result = IsWindowEnabled(sub_4318d0(eax_2))
                    
                    if (result != 0)
                        result = (*(*eax_2 + 0xc8))()
            
            edi_1 += 1
            i = esi_2
            esi_2 -= 1
        while (i != 1)
    
    return result
}
