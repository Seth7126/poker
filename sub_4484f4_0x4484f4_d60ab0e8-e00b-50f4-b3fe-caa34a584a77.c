// ============================================================
// 函数名称: sub_4484f4
// 虚拟地址: 0x4484f4
// WARP GUID: d60ab0e8-e00b-50f4-b3fe-caa34a584a77
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetWindowPos
// [内部子函数调用]: sub_410524
// [被调用的父级函数]: sub_448dc0, sub_448668
// ============================================================

void* __convention("regparm")sub_4484f4(void* arg1)
{
    // 第一条实际指令: void* result = data_5317d8
    void* result = data_5317d8
    
    if (*(result + 0x24) != 0 && *(arg1 + 0x84) s> 0)
        *(arg1 + 0x84) -= 1
        
        if (*(arg1 + 0x84) == 0)
            int32_t i = *(*(arg1 + 0x80) + 8) - 1
            
            if (i s>= 0)
                do
                    SetWindowPos(sub_410524(*(arg1 + 0x80), i), 0xffffffff, 0, 0, 0, 0, 0x13)
                    i -= 1
                while (i != 0xffffffff)
            
            return (*(**(arg1 + 0x80) + 8))()
    
    return result
}
