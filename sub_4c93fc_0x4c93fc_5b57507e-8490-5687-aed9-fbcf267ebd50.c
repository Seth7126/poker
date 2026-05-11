// ============================================================
// 函数名称: sub_4c93fc
// 虚拟地址: 0x4c93fc
// WARP GUID: 5b57507e-8490-5687-aed9-fbcf267ebd50
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4837d0, sub_514c8c, sub_514c48, sub_4c0924
// [被调用的父级函数]: sub_4e6659, sub_50b624, sub_4e649b
// ============================================================

void*sub_4c93fc()
{
    // 第一条实际指令: *(*data_530304 + 0xabd) = 0
    *(*data_530304 + 0xabd) = 0
    sub_4837d0(*data_530304, *data_530a74)
    sub_4837d0(*data_530304, *data_5302bc)
    void* result = sub_4c0924()
    
    if (result.b != 0)
        int32_t edx_4
        
        if (*(*data_530454 + 0x344) != 0)
            edx_4.b = 1
            sub_514c8c(*data_530454)
        
        result = *data_530454
        
        if (*(result + 0x345) != 0)
            *(*data_530454 + 0x5c) = 1
            edx_4.b = 1
            return sub_514c48(*data_530454)
    
    return result
}
