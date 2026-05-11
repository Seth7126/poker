// ============================================================
// 函数名称: sub_4472cc
// 虚拟地址: 0x4472cc
// WARP GUID: 1f4f993d-36f7-51e4-a369-b3ba1f262718
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_432c9c, sub_449c64, sub_4106bc
// [被调用的父级函数]: sub_4427a0
// ============================================================

void* __convention("regparm")sub_4472cc(void* arg1)
{
    // 第一条实际指令: sub_4106bc(*(arg1 + 0x44))
    sub_4106bc(*(arg1 + 0x44))
    sub_4106bc(*(arg1 + 0x40))
    sub_449c64(data_5317d8)
    void* result = *(arg1 + 0x44)
    
    if (*(result + 8) == 0)
        result = data_5317d8
        
        if (*(result + 0x74) != 0)
            *(data_5317d8 + 0x74)
            return sub_432c9c()
    
    return result
}
