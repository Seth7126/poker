// ============================================================
// 函数名称: sub_4c2cdc
// 虚拟地址: 0x4c2cdc
// WARP GUID: ec878f0b-0523-565a-ad61-19076ab8b331
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c2c18, sub_403010
// [被调用的父级函数]: sub_4c4b34
// ============================================================

int32_tsub_4c2cdc()
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    int32_t i_1 = *data_5300d0
    
    if (i_1 s> 0)
        int32_t esi_1 = 1
        int32_t i
        
        do
            if (sub_4c2c18(esi_1) != 0)
                int32_t result_1 = result
                result += 1
                
                if (add_overflow(result_1, 1))
                    sub_403010()
                    noreturn
            
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
