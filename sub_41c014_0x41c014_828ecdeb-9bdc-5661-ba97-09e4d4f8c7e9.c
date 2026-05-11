// ============================================================
// 函数名称: sub_41c014
// 虚拟地址: 0x41c014
// WARP GUID: 828ecdeb-9bdc-5661-ba97-09e4d4f8c7e9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DeleteEnhMetaFile
// [内部子函数调用]: sub_403430, sub_403420, sub_4030c0, sub_417c44
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_41c014(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    HENHMETAFILE hmf = arg1[2]
    
    if (hmf != 0)
        DeleteEnhMetaFile(hmf)
    
    int32_t edx
    edx.b = arg2.b & 0xfc
    int32_t result = sub_4030c0(sub_417c44(arg1[5]), edx)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
