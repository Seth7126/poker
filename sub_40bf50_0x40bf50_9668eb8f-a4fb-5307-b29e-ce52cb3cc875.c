// ============================================================
// 函数名称: sub_40bf50
// 虚拟地址: 0x40bf50
// WARP GUID: 9668eb8f-a4fb-5307-b29e-ce52cb3cc875
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40be78, sub_404078
// [被调用的父级函数]: sub_40a218
// ============================================================

int32_t __convention("regparm")sub_40bf50(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result_1 = arg2
    int32_t result_1 = arg2
    int32_t result = 0
    
    if (result_1 s> 0)
        if (result_1 s> sub_404078(arg1))
            result_1 = sub_404078(arg1)
        
        if (data_5315bc == 0)
            result = result_1
        else
            int32_t var_c
            sub_40be78(&var_c, result_1, arg1, &result)
            
            if (sub_404078(arg1) s< result)
                result = sub_404078(arg1)
    
    return result
}
