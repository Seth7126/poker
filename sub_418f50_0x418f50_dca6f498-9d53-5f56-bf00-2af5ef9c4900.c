// ============================================================
// 函数名称: sub_418f50
// 虚拟地址: 0x418f50
// WARP GUID: dca6f498-9d53-5f56-bf00-2af5ef9c4900
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403430, sub_403420, sub_417e28
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_418f50(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    int32_t result = sub_417e28(data_5316a8, arg1[4])
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
