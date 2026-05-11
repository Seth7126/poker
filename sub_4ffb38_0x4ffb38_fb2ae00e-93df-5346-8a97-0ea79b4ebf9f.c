// ============================================================
// 函数名称: sub_4ffb38
// 虚拟地址: 0x4ffb38
// WARP GUID: fb2ae00e-93df-5346-8a97-0ea79b4ebf9f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4fe478, sub_4ffb2c, sub_4fef20
// [被调用的父级函数]: sub_50003c
// ============================================================

int32_tsub_4ffb38(void* arg1)
{
    // 第一条实际指令: char result
    char result
    
    if (*(arg1 - 0x29) != 0)
        if (sub_4ffb2c() != 0)
            (*data_52ffd4)(9)
        
        sub_4fef20(1, 1, 0xffffffff, 0xffffffff, 1f, 0f, arg1)
        sub_4fef20(1, 0xffffffff, 1, 1, 0f, 0f, arg1)
        
        if (sub_4ffb2c() != 0)
            (*data_530a08)()
        
        if (sub_4ffb2c() != 0)
            (*data_52ffd4)(8)
        
        sub_4fe478(0f, 
            fconvert.s(fconvert.t(1f) - fconvert.t(*(arg1 + 0x2c)) / fconvert.t(50f)
                * fconvert.t(*(arg1 + 0x30)) / fconvert.t(*(arg1 + 0x34))), 
            0f, 
            fconvert.s(fconvert.t(*(arg1 + 0x2c)) / fconvert.t(50f) / fconvert.t(2f)
                * fconvert.t(*(arg1 + 0x30)) / fconvert.t(*(arg1 + 0x34))), 
            arg1)
        
        if (sub_4ffb2c() != 0)
            (*data_530a08)()
        
        if (sub_4ffb2c() != 0)
            (*data_52ffd4)(9)
        
        sub_4fef20(0xffffffff, 1, 0xffffffff, 1, 0f, 1f, arg1)
        sub_4fef20(0xffffffff, 0xffffffff, 1, 0xffffffff, 1f, 1f, arg1)
        result = sub_4ffb2c()
        
        if (result != 0)
            return (*data_530a08)()
    else
        if (sub_4ffb2c() != 0)
            (*data_52ffd4)(9)
        
        sub_4fef20(1, 0xffffffff, 1, 1, 0f, 0f, arg1)
        sub_4fef20(0xffffffff, 1, 0xffffffff, 1, 0f, 1f, arg1)
        
        if (sub_4ffb2c() != 0)
            (*data_530a08)()
        
        if (sub_4ffb2c() != 0)
            (*data_52ffd4)(8)
        
        sub_4fe478(fconvert.s(fconvert.t(1f) - fconvert.t(*(arg1 + 0x2c)) / fconvert.t(50f)), 0f, 
            fconvert.s(fconvert.t(*(arg1 + 0x2c)) / fconvert.t(50f) / fconvert.t(2f)), 0f, arg1)
        
        if (sub_4ffb2c() != 0)
            (*data_530a08)()
        
        if (sub_4ffb2c() != 0)
            (*data_52ffd4)(9)
        
        sub_4fef20(0xffffffff, 0xffffffff, 1, 0xffffffff, 1f, 1f, arg1)
        sub_4fef20(1, 1, 0xffffffff, 0xffffffff, 1f, 0f, arg1)
        result = sub_4ffb2c()
        
        if (result != 0)
            return (*data_530a08)()
    
    return result
}
