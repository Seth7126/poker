// ============================================================
// 函数名称: sub_4398b4
// 虚拟地址: 0x4398b4
// WARP GUID: 571cabfa-3ff3-5319-9fbe-fdf22b7623c0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43697c, sub_403260
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_4398b4(void* arg1)
{
    // 第一条实际指令: if (sub_43697c(arg1) != 0)
    if (sub_43697c(arg1) != 0)
        int32_t* result = *(arg1 + 0x10)
        sub_403260(result, &data_436278)
        result.b = *(result + 0x6a)
        
        if (result.b == *(*(arg1 + 0x18) + 0x32))
            result.b = 1
            return result
    
    return 0
}
