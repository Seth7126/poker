// ============================================================
// 函数名称: sub_453e6c
// 虚拟地址: 0x453e6c
// WARP GUID: 4072c57c-e49d-521f-a983-8fcff45baa34
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41b1ac, sub_403248
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_453e6c(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    if (sub_403248(arg2, 0x453344) != 0)
        void* eax_2 = arg1[8]
        
        if (*(eax_2 + 8) != 0 && *(arg2[8] + 8) != 0)
            return sub_41b1ac(arg1, arg2)
        
        result.b = eax_2 == arg2[8]
    
    return result
}
