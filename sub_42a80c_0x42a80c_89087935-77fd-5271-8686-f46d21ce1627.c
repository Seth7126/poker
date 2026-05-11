// ============================================================
// 函数名称: sub_42a80c
// 虚拟地址: 0x42a80c
// WARP GUID: 89087935-77fd-5271-8686-f46d21ce1627
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_436918, sub_403260
// [被调用的父级函数]: sub_426fb7
// ============================================================

int32_t* __convention("regparm")sub_42a80c(void* arg1)
{
    // 第一条实际指令: if (sub_436918(arg1) != 0)
    if (sub_436918(arg1) != 0)
        char eax_3 = (*(**(arg1 + 0x18) + 0x4c))()
        int32_t* result = *(arg1 + 0x10)
        sub_403260(result, &data_436278)
        
        if (eax_3 == *(result + 0x59))
            result.b = 1
            return result
    
    return 0
}
