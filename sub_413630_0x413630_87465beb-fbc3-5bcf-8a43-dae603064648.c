// ============================================================
// 函数名称: sub_413630
// 虚拟地址: 0x413630
// WARP GUID: 87465beb-fbc3-5bcf-8a43-dae603064648
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403430, sub_403420, sub_413074
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_413630(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    arg1[4]
    arg1[5]
    int32_t ecx
    ecx.w = 1
    (*(*arg1[1] + 0xc))()
    int32_t edx_2
    edx_2.b = arg2.b & 0xfc
    int32_t result = sub_413074(arg1, edx_2)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
