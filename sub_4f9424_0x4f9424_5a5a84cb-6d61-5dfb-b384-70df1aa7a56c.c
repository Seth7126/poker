// ============================================================
// 函数名称: sub_4f9424
// 虚拟地址: 0x4f9424
// WARP GUID: 5a5a84cb-6d61-5dfb-b384-70df1aa7a56c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4f91d0, sub_402d38, sub_4f92a0, sub_4f9248, sub_4f92cc, sub_48156c, sub_4f8b60, sub_4f9398, sub_4f9360, sub_4f93fc, sub_4f0c7c
// [被调用的父级函数]: sub_4dad04, sub_4f1980, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_4f9424(char arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    var_8:2.b = 0
    var_8:1.b = 0
    
    if (arg1 != 1 && arg1 != 0)
        if (arg1 == 4)
            void* edx_1
            edx_1.b = *(data_530598 + 0x3c9)
            var_8:2.b = edx_1.b
            var_8:1.b = 1
        else if (arg1 == 2)
            var_8:1.b = 1
        else if (arg1 == 3)
            void* edx_2
            edx_2.b = *(data_530598 + 0x3c9)
            var_8:2.b = edx_2.b
    
    if (*(*data_530304 + 0xceb) != 0)
        var_8:2.b = 0
        var_8:1.b = 0
    
    if (*(data_530598 + 0x390) == 0)
        var_8:2.b = 0
    
    int32_t edx
    
    if (arg1 != 1)
        (*data_5300d4)(0)
        sub_48156c(0, *data_530730, *data_530304, 0x3f800000, 1f, 0, 0f, 0f, 0, 0, 0x260, 0x328, 0)
        (*data_5300d4)(1)
        
        if (var_8:2.b == 0)
            int32_t var_10_7 = edx
            sub_4f8b60(1, false, 0)
            int32_t var_10_8 = edx
            sub_4f8b60(1, true, 0)
        else
            (*data_5300d4)(0)
            int32_t var_10_1 = edx
            sub_4f8b60(1, false, 0)
            int32_t var_10_2 = edx
            sub_4f8b60(1, true, 0)
            (*data_5300d4)(1)
            sub_4f91d0()
            int32_t var_10_3 = edx
            sub_4f8b60(1, true, 1)
            sub_4f9248()
            int32_t var_10_4 = edx
            sub_4f8b60(3, true, 0)
            int32_t var_10_5 = edx
            sub_4f8b60(2, true, 0)
            sub_4f92a0()
            (*data_530928)(0, 0, 0, 0)
            int32_t var_10_6 = edx
            sub_4f8b60(1, true, 0)
            (*data_530928)(1, 1, 1, 1)
        
        int32_t var_10_9 = edx
        sub_4f8b60(2, true, 0)
        int32_t var_10_10 = edx
        sub_4f8b60(3, true, 0)
        
        if (var_8:1.b != 0)
            data_7a7d90 = fconvert.s(sub_402d38())
            data_7a7d94 = fconvert.s(sub_402d38())
            sub_4f92cc()
            int32_t var_10_11 = edx
            sub_4f8b60(4, true, 0)
            sub_4f9360()
            int32_t var_10_12 = edx
            sub_4f8b60(4, true, 0)
            sub_4f9398()
            (*data_53006c)(0xb71)
            int32_t var_10_13 = edx
            sub_4f8b60(5, true, 0)
            sub_4f0c7c(0xb71)
            sub_4f93fc()
        
        (*data_53051c)(0x203)
        int32_t var_10_14 = edx
        sub_4f8b60(7, true, 0)
    else
        int32_t var_10 = edx
        void* edx_5
        edx_5.b = 5
        sub_4f8b60(2, edx_5.b, 0)
    int32_t result
    result.b = var_8:3.b
    return result
}
