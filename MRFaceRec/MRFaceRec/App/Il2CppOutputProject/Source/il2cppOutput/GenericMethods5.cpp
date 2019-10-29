#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_tD431CA53D2DA04D533C85B6F283DF4535D06B9FC;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t6CC82F01278D7AA7C3DC2939506F0C54E06AAADE;
// System.Collections.Generic.IList`1<UnityEngine.Transform>
struct IList_1_t31692ECA0BBD35CF2962A40DAB6172CE7922AD2E;
// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>[]
struct KeyValuePair_2U5BU5D_t920EB0A30DD5CE3BAAF02931D1ABDF93367AC84A;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t4594E4068980FD80C0C538F4F8042A626BC1F262;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Boolean>
struct Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Byte>
struct Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Char>
struct Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.DateTime>
struct Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.DateTimeOffset>
struct Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Decimal>
struct Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Double>
struct Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Guid>
struct Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Int16>
struct Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Int32>
struct Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Int64>
struct Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.IntPtr>
struct Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Object>
struct Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.SByte>
struct Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Single>
struct Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.TimeSpan>
struct Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.UInt16>
struct Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.UInt32>
struct Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.UInt64>
struct Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.UIntPtr>
struct Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Boolean>
struct Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Byte>
struct Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Char>
struct Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.DateTime>
struct Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.DateTimeOffset>
struct Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Decimal>
struct Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Double>
struct Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Guid>
struct Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Int16>
struct Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Int32>
struct Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Int64>
struct Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.IntPtr>
struct Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Object>
struct Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.SByte>
struct Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Single>
struct Transformer_1_t761E0F084572634E94674D7C1912B56771C73045;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.TimeSpan>
struct Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.UInt16>
struct Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.UInt32>
struct Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.UInt64>
struct Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.UIntPtr>
struct Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Boolean>
struct Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Byte>
struct Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Char>
struct Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.DateTime>
struct Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.DateTimeOffset>
struct Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Decimal>
struct Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Double>
struct Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Guid>
struct Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Int16>
struct Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Int32>
struct Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Int64>
struct Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.IntPtr>
struct Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Object>
struct Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.SByte>
struct Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Single>
struct Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.TimeSpan>
struct Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.UInt16>
struct Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.UInt32>
struct Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.UInt64>
struct Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.UIntPtr>
struct Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Boolean>
struct Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Byte>
struct Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Char>
struct Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.DateTime>
struct Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.DateTimeOffset>
struct Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Decimal>
struct Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Double>
struct Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Guid>
struct Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Int16>
struct Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Int32>
struct Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Int64>
struct Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.IntPtr>
struct Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Object>
struct Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.SByte>
struct Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Single>
struct Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.TimeSpan>
struct Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.UInt16>
struct Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.UInt32>
struct Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.UInt64>
struct Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.UIntPtr>
struct Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Object,System.Object>
struct Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Boolean>
struct Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Byte>
struct Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Char>
struct Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.DateTime>
struct Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.DateTimeOffset>
struct Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Decimal>
struct Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Double>
struct Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Guid>
struct Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Int16>
struct Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Int32>
struct Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Int64>
struct Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.IntPtr>
struct Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Object>
struct Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.SByte>
struct Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Single>
struct Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.TimeSpan>
struct Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.UInt16>
struct Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.UInt32>
struct Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.UInt64>
struct Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.UIntPtr>
struct Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Boolean>
struct Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Byte>
struct Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Char>
struct Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.DateTime>
struct Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.DateTimeOffset>
struct Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Decimal>
struct Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Double>
struct Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Guid>
struct Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Int16>
struct Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Int32>
struct Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Int64>
struct Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.IntPtr>
struct Transformer_1_t873B2E4C2418F756278367655E1C64D654382460;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Object>
struct Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.SByte>
struct Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Single>
struct Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.TimeSpan>
struct Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.UInt16>
struct Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.UInt32>
struct Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.UInt64>
struct Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.UIntPtr>
struct Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Boolean>
struct Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Byte>
struct Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Char>
struct Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.DateTime>
struct Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.DateTimeOffset>
struct Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Decimal>
struct Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Double>
struct Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Guid>
struct Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Int16>
struct Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Int32>
struct Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Int64>
struct Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.IntPtr>
struct Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Object>
struct Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.SByte>
struct Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Single>
struct Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.TimeSpan>
struct Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.UInt16>
struct Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.UInt32>
struct Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.UInt64>
struct Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.UIntPtr>
struct Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Boolean>
struct Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Byte>
struct Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Char>
struct Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.DateTime>
struct Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.DateTimeOffset>
struct Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Decimal>
struct Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Double>
struct Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Guid>
struct Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Int16>
struct Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Int32>
struct Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Int64>
struct Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.IntPtr>
struct Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Object>
struct Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.SByte>
struct Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Single>
struct Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.TimeSpan>
struct Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UInt16>
struct Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UInt32>
struct Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UInt64>
struct Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UIntPtr>
struct Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913;
// System.Dynamic.BindingRestrictions/TestBuilder/AndNode[]
struct AndNodeU5BU5D_tCDAE7878A5056262CF069AB9A8C3720BED503611;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`2<System.Runtime.CompilerServices.CallSiteBinder,System.Runtime.CompilerServices.CallSite>>
struct CacheDict_2_t53E47CA277D18C28DB76A96F131A833431A67EEE;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Linq.Expressions.Expression
struct Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F;
// System.Linq.Expressions.Interpreter.LocalDefinition[]
struct LocalDefinitionU5BU5D_tE3170C0A3284313CAB9CA6A3B3F79027464F78F5;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Object[][]
struct ObjectU5BU5DU5BU5D_t990A2F73EF96ED2F281C02027E303D465098835F;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF;
// System.Reflection.CustomAttributeData/LazyCAttrData
struct LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38;
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828;
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.CallSiteBinder
struct CallSiteBinder_t76CF754DF48E3820B386E9C71F8DA13FCDD1C889;
// System.Runtime.CompilerServices.CallSite`1<System.Object>
struct CallSite_1_t6B791A796E7920F964397D6D4A417E14EF67541D;
// System.Runtime.CompilerServices.RuleCache`1<System.Object>
struct RuleCache_1_tDD048DE084B8B75C031EEFD4B27EE52502DB9F95;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_tC8BA6CC6AE9BBB9A4F9703E7EA47532F813105B0;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>
struct EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>
struct EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>
struct EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
struct EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
struct EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
struct EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>
struct EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
struct EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
struct EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
struct EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>
struct EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>
struct EventFunction_1_t7521247C87411935E8A2CA38683533083459473F;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_tA46EC5C3029914B5C6BC43C2337CBB8067BB19FC;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;

extern RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
extern RuntimeClass* ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var;
extern RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral19EDC1210777BA4D45049C29280D9CC5E1064C25;
extern String_t* _stringLiteralEF5C844EAB88BCACA779BD2F3AD67B573BBBBFCA;
extern const RuntimeMethod* Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m4413771DE3FCE90800D60FBAFA5909A8E5E4F917_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m6FBF36E821E762256C887A96718EC1B49B67EA8D_RuntimeMethod_var;
extern const uint32_t Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_MetadataUsageId;
extern const uint32_t ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m00DF495FDAFA66A78A4B175A094C644FB5D901D5_MetadataUsageId;
extern const uint32_t ExecuteEvents_GetEventHandler_TisRuntimeObject_m254A7FA10E4BFC952CF3E997AF14092C337943B6_MetadataUsageId;
extern const uint32_t GameObject_GetComponents_TisRuntimeObject_m199B72A002ECBCA128D9490B3B1FBE35BA0E1181_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_t920EB0A30DD5CE3BAAF02931D1ABDF93367AC84A;
struct KeyValuePair_2U5BU5D_t4594E4068980FD80C0C538F4F8042A626BC1F262;
struct AndNodeU5BU5D_tCDAE7878A5056262CF069AB9A8C3720BED503611;
struct LocalDefinitionU5BU5D_tE3170C0A3284313CAB9CA6A3B3F79027464F78F5;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828;
struct CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05;
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef ENUMERABLEHELPERS_T91DA7E2949102CFE16D0A151F7C355F72753F1FD_H
#define ENUMERABLEHELPERS_T91DA7E2949102CFE16D0A151F7C355F72753F1FD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.EnumerableHelpers
struct  EnumerableHelpers_t91DA7E2949102CFE16D0A151F7C355F72753F1FD  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERABLEHELPERS_T91DA7E2949102CFE16D0A151F7C355F72753F1FD_H
#ifndef LIST_1_T1863EF4EE1FDEED14D460C85AF61BE0850892F6D_H
#define LIST_1_T1863EF4EE1FDEED14D460C85AF61BE0850892F6D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct  List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D, ____items_1)); }
	inline TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D_StaticFields, ____emptyArray_5)); }
	inline TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1863EF4EE1FDEED14D460C85AF61BE0850892F6D_H
#ifndef CASTER_1_T1C42C521F7CF8631FF6985A641436B54CEE018E8_H
#define CASTER_1_T1C42C521F7CF8631FF6985A641436B54CEE018E8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Boolean>
struct  Caster_1_t1C42C521F7CF8631FF6985A641436B54CEE018E8  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1C42C521F7CF8631FF6985A641436B54CEE018E8_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1C42C521F7CF8631FF6985A641436B54CEE018E8_StaticFields, ___Instance_0)); }
	inline Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T1C42C521F7CF8631FF6985A641436B54CEE018E8_H
#ifndef CASTER_1_TE0B5719D5D953F42A65E75E7D46BD8D7DD83D018_H
#define CASTER_1_TE0B5719D5D953F42A65E75E7D46BD8D7DD83D018_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Byte>
struct  Caster_1_tE0B5719D5D953F42A65E75E7D46BD8D7DD83D018  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE0B5719D5D953F42A65E75E7D46BD8D7DD83D018_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE0B5719D5D953F42A65E75E7D46BD8D7DD83D018_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TE0B5719D5D953F42A65E75E7D46BD8D7DD83D018_H
#ifndef CASTER_1_TAFB70D9BBAD381451752BAEF28C81B52B2869977_H
#define CASTER_1_TAFB70D9BBAD381451752BAEF28C81B52B2869977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Char>
struct  Caster_1_tAFB70D9BBAD381451752BAEF28C81B52B2869977  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tAFB70D9BBAD381451752BAEF28C81B52B2869977_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tAFB70D9BBAD381451752BAEF28C81B52B2869977_StaticFields, ___Instance_0)); }
	inline Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TAFB70D9BBAD381451752BAEF28C81B52B2869977_H
#ifndef CASTER_1_T09B5032BA61F81ADC8AEF23DEF9F301CE607AF7C_H
#define CASTER_1_T09B5032BA61F81ADC8AEF23DEF9F301CE607AF7C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_t09B5032BA61F81ADC8AEF23DEF9F301CE607AF7C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t09B5032BA61F81ADC8AEF23DEF9F301CE607AF7C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t09B5032BA61F81ADC8AEF23DEF9F301CE607AF7C_StaticFields, ___Instance_0)); }
	inline Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T09B5032BA61F81ADC8AEF23DEF9F301CE607AF7C_H
#ifndef CASTER_1_TB37D2514A59669003F7F156FB271151F0D11E5FB_H
#define CASTER_1_TB37D2514A59669003F7F156FB271151F0D11E5FB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.DateTime>
struct  Caster_1_tB37D2514A59669003F7F156FB271151F0D11E5FB  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB37D2514A59669003F7F156FB271151F0D11E5FB_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB37D2514A59669003F7F156FB271151F0D11E5FB_StaticFields, ___Instance_0)); }
	inline Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TB37D2514A59669003F7F156FB271151F0D11E5FB_H
#ifndef CASTER_1_TAD8FA143928683B1E0B6BEB460980A8543022E9B_H
#define CASTER_1_TAD8FA143928683B1E0B6BEB460980A8543022E9B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.DateTimeOffset>
struct  Caster_1_tAD8FA143928683B1E0B6BEB460980A8543022E9B  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tAD8FA143928683B1E0B6BEB460980A8543022E9B_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tAD8FA143928683B1E0B6BEB460980A8543022E9B_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TAD8FA143928683B1E0B6BEB460980A8543022E9B_H
#ifndef CASTER_1_T58883F2D0ACC52F20C8978FC28C9C9D9CCFC69C2_H
#define CASTER_1_T58883F2D0ACC52F20C8978FC28C9C9D9CCFC69C2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Decimal>
struct  Caster_1_t58883F2D0ACC52F20C8978FC28C9C9D9CCFC69C2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t58883F2D0ACC52F20C8978FC28C9C9D9CCFC69C2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t58883F2D0ACC52F20C8978FC28C9C9D9CCFC69C2_StaticFields, ___Instance_0)); }
	inline Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T58883F2D0ACC52F20C8978FC28C9C9D9CCFC69C2_H
#ifndef CASTER_1_TAFED591EF13E015162D8B2F6F629837E43482837_H
#define CASTER_1_TAFED591EF13E015162D8B2F6F629837E43482837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_tAFED591EF13E015162D8B2F6F629837E43482837  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tAFED591EF13E015162D8B2F6F629837E43482837_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tAFED591EF13E015162D8B2F6F629837E43482837_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TAFED591EF13E015162D8B2F6F629837E43482837_H
#ifndef CASTER_1_TF3B99FF3BBCDEA3D042AAF9F41A16C7AD4A29ED2_H
#define CASTER_1_TF3B99FF3BBCDEA3D042AAF9F41A16C7AD4A29ED2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Double>
struct  Caster_1_tF3B99FF3BBCDEA3D042AAF9F41A16C7AD4A29ED2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF3B99FF3BBCDEA3D042AAF9F41A16C7AD4A29ED2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF3B99FF3BBCDEA3D042AAF9F41A16C7AD4A29ED2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TF3B99FF3BBCDEA3D042AAF9F41A16C7AD4A29ED2_H
#ifndef CASTER_1_TD296AE417E6EE7ADB8DAF202B8BC3203CBE89300_H
#define CASTER_1_TD296AE417E6EE7ADB8DAF202B8BC3203CBE89300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Guid>
struct  Caster_1_tD296AE417E6EE7ADB8DAF202B8BC3203CBE89300  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tD296AE417E6EE7ADB8DAF202B8BC3203CBE89300_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tD296AE417E6EE7ADB8DAF202B8BC3203CBE89300_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TD296AE417E6EE7ADB8DAF202B8BC3203CBE89300_H
#ifndef CASTER_1_T699B4565B14DC3E4AAE69424E8CCCB8C5F5C84BF_H
#define CASTER_1_T699B4565B14DC3E4AAE69424E8CCCB8C5F5C84BF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Int16>
struct  Caster_1_t699B4565B14DC3E4AAE69424E8CCCB8C5F5C84BF  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t699B4565B14DC3E4AAE69424E8CCCB8C5F5C84BF_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t699B4565B14DC3E4AAE69424E8CCCB8C5F5C84BF_StaticFields, ___Instance_0)); }
	inline Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T699B4565B14DC3E4AAE69424E8CCCB8C5F5C84BF_H
#ifndef CASTER_1_T847B65F78580B4C35C46212B37066290881E839D_H
#define CASTER_1_T847B65F78580B4C35C46212B37066290881E839D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Int32>
struct  Caster_1_t847B65F78580B4C35C46212B37066290881E839D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t847B65F78580B4C35C46212B37066290881E839D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t847B65F78580B4C35C46212B37066290881E839D_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T847B65F78580B4C35C46212B37066290881E839D_H
#ifndef CASTER_1_TEE77AB8F884BD2579C99A38CFB1AAFEE0DCF07FA_H
#define CASTER_1_TEE77AB8F884BD2579C99A38CFB1AAFEE0DCF07FA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Int64>
struct  Caster_1_tEE77AB8F884BD2579C99A38CFB1AAFEE0DCF07FA  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tEE77AB8F884BD2579C99A38CFB1AAFEE0DCF07FA_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tEE77AB8F884BD2579C99A38CFB1AAFEE0DCF07FA_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TEE77AB8F884BD2579C99A38CFB1AAFEE0DCF07FA_H
#ifndef CASTER_1_T02312CA733627756FCC99C1ED8322D3A6C51FB60_H
#define CASTER_1_T02312CA733627756FCC99C1ED8322D3A6C51FB60_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.IntPtr>
struct  Caster_1_t02312CA733627756FCC99C1ED8322D3A6C51FB60  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t02312CA733627756FCC99C1ED8322D3A6C51FB60_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t02312CA733627756FCC99C1ED8322D3A6C51FB60_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T02312CA733627756FCC99C1ED8322D3A6C51FB60_H
#ifndef CASTER_1_T79B0C615C852AD755B10B324A903BD8ECE30C1D2_H
#define CASTER_1_T79B0C615C852AD755B10B324A903BD8ECE30C1D2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Object>
struct  Caster_1_t79B0C615C852AD755B10B324A903BD8ECE30C1D2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t79B0C615C852AD755B10B324A903BD8ECE30C1D2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t79B0C615C852AD755B10B324A903BD8ECE30C1D2_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T79B0C615C852AD755B10B324A903BD8ECE30C1D2_H
#ifndef CASTER_1_T27F1F99B9A4CEB186ECF7805145934EA77CB1257_H
#define CASTER_1_T27F1F99B9A4CEB186ECF7805145934EA77CB1257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.SByte>
struct  Caster_1_t27F1F99B9A4CEB186ECF7805145934EA77CB1257  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t27F1F99B9A4CEB186ECF7805145934EA77CB1257_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t27F1F99B9A4CEB186ECF7805145934EA77CB1257_StaticFields, ___Instance_0)); }
	inline Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T27F1F99B9A4CEB186ECF7805145934EA77CB1257_H
#ifndef CASTER_1_T5908B8116E70EA9E946E9F5128B622E9063630CC_H
#define CASTER_1_T5908B8116E70EA9E946E9F5128B622E9063630CC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Single>
struct  Caster_1_t5908B8116E70EA9E946E9F5128B622E9063630CC  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5908B8116E70EA9E946E9F5128B622E9063630CC_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5908B8116E70EA9E946E9F5128B622E9063630CC_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T5908B8116E70EA9E946E9F5128B622E9063630CC_H
#ifndef CASTER_1_T0B12755AB11A35CCF3F2B11D0A02101A3A325F45_H
#define CASTER_1_T0B12755AB11A35CCF3F2B11D0A02101A3A325F45_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.TimeSpan>
struct  Caster_1_t0B12755AB11A35CCF3F2B11D0A02101A3A325F45  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t0B12755AB11A35CCF3F2B11D0A02101A3A325F45_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t0B12755AB11A35CCF3F2B11D0A02101A3A325F45_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T0B12755AB11A35CCF3F2B11D0A02101A3A325F45_H
#ifndef CASTER_1_T408C47A521D832C453740F1E3F374FCCB5E32E8A_H
#define CASTER_1_T408C47A521D832C453740F1E3F374FCCB5E32E8A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.UInt16>
struct  Caster_1_t408C47A521D832C453740F1E3F374FCCB5E32E8A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t408C47A521D832C453740F1E3F374FCCB5E32E8A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t408C47A521D832C453740F1E3F374FCCB5E32E8A_StaticFields, ___Instance_0)); }
	inline Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T408C47A521D832C453740F1E3F374FCCB5E32E8A_H
#ifndef CASTER_1_T674C9A8AF3118A1ACC250CBE1B160B5287944451_H
#define CASTER_1_T674C9A8AF3118A1ACC250CBE1B160B5287944451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.UInt32>
struct  Caster_1_t674C9A8AF3118A1ACC250CBE1B160B5287944451  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t674C9A8AF3118A1ACC250CBE1B160B5287944451_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t674C9A8AF3118A1ACC250CBE1B160B5287944451_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T674C9A8AF3118A1ACC250CBE1B160B5287944451_H
#ifndef CASTER_1_T80311815F1B7E9467CB0674AEC735F4E06AF50CA_H
#define CASTER_1_T80311815F1B7E9467CB0674AEC735F4E06AF50CA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.UInt64>
struct  Caster_1_t80311815F1B7E9467CB0674AEC735F4E06AF50CA  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t80311815F1B7E9467CB0674AEC735F4E06AF50CA_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t80311815F1B7E9467CB0674AEC735F4E06AF50CA_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T80311815F1B7E9467CB0674AEC735F4E06AF50CA_H
#ifndef CASTER_1_T57C825D368DB63A6299B8DF204CDB497F51F538D_H
#define CASTER_1_T57C825D368DB63A6299B8DF204CDB497F51F538D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.UIntPtr>
struct  Caster_1_t57C825D368DB63A6299B8DF204CDB497F51F538D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t57C825D368DB63A6299B8DF204CDB497F51F538D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t57C825D368DB63A6299B8DF204CDB497F51F538D_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T57C825D368DB63A6299B8DF204CDB497F51F538D_H
#ifndef CASTER_1_TCAA6ACA318706EA3CFC28187859C80CD568A8943_H
#define CASTER_1_TCAA6ACA318706EA3CFC28187859C80CD568A8943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Boolean>
struct  Caster_1_tCAA6ACA318706EA3CFC28187859C80CD568A8943  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCAA6ACA318706EA3CFC28187859C80CD568A8943_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCAA6ACA318706EA3CFC28187859C80CD568A8943_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TCAA6ACA318706EA3CFC28187859C80CD568A8943_H
#ifndef CASTER_1_TCFD75E9DB3970A86144B6EFA3E793B6C12B52B33_H
#define CASTER_1_TCFD75E9DB3970A86144B6EFA3E793B6C12B52B33_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Byte>
struct  Caster_1_tCFD75E9DB3970A86144B6EFA3E793B6C12B52B33  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCFD75E9DB3970A86144B6EFA3E793B6C12B52B33_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCFD75E9DB3970A86144B6EFA3E793B6C12B52B33_StaticFields, ___Instance_0)); }
	inline Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TCFD75E9DB3970A86144B6EFA3E793B6C12B52B33_H
#ifndef CASTER_1_TDE1C83FE3C48AB3782D0BCBC7ACD4EA1700DBF59_H
#define CASTER_1_TDE1C83FE3C48AB3782D0BCBC7ACD4EA1700DBF59_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Char>
struct  Caster_1_tDE1C83FE3C48AB3782D0BCBC7ACD4EA1700DBF59  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tDE1C83FE3C48AB3782D0BCBC7ACD4EA1700DBF59_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tDE1C83FE3C48AB3782D0BCBC7ACD4EA1700DBF59_StaticFields, ___Instance_0)); }
	inline Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TDE1C83FE3C48AB3782D0BCBC7ACD4EA1700DBF59_H
#ifndef CASTER_1_T6B1DD3EE8B308447896C88A6A69138BC65A5FA40_H
#define CASTER_1_T6B1DD3EE8B308447896C88A6A69138BC65A5FA40_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_t6B1DD3EE8B308447896C88A6A69138BC65A5FA40  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t6B1DD3EE8B308447896C88A6A69138BC65A5FA40_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t6B1DD3EE8B308447896C88A6A69138BC65A5FA40_StaticFields, ___Instance_0)); }
	inline Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T6B1DD3EE8B308447896C88A6A69138BC65A5FA40_H
#ifndef CASTER_1_T502C258C3B6A03A1FD5B2E3254072F77EE89A675_H
#define CASTER_1_T502C258C3B6A03A1FD5B2E3254072F77EE89A675_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.DateTime>
struct  Caster_1_t502C258C3B6A03A1FD5B2E3254072F77EE89A675  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t502C258C3B6A03A1FD5B2E3254072F77EE89A675_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t502C258C3B6A03A1FD5B2E3254072F77EE89A675_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T502C258C3B6A03A1FD5B2E3254072F77EE89A675_H
#ifndef CASTER_1_T11F20427B499F3CD52E11D6A1AB7C931DCF96DB8_H
#define CASTER_1_T11F20427B499F3CD52E11D6A1AB7C931DCF96DB8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.DateTimeOffset>
struct  Caster_1_t11F20427B499F3CD52E11D6A1AB7C931DCF96DB8  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t11F20427B499F3CD52E11D6A1AB7C931DCF96DB8_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t11F20427B499F3CD52E11D6A1AB7C931DCF96DB8_StaticFields, ___Instance_0)); }
	inline Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T11F20427B499F3CD52E11D6A1AB7C931DCF96DB8_H
#ifndef CASTER_1_TB676512E7A350DB4ED01AA9C00F5621E3A8C7F0F_H
#define CASTER_1_TB676512E7A350DB4ED01AA9C00F5621E3A8C7F0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Decimal>
struct  Caster_1_tB676512E7A350DB4ED01AA9C00F5621E3A8C7F0F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB676512E7A350DB4ED01AA9C00F5621E3A8C7F0F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB676512E7A350DB4ED01AA9C00F5621E3A8C7F0F_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TB676512E7A350DB4ED01AA9C00F5621E3A8C7F0F_H
#ifndef CASTER_1_T8218635FFE52C666262AEEAEE207339F47173DFF_H
#define CASTER_1_T8218635FFE52C666262AEEAEE207339F47173DFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_t8218635FFE52C666262AEEAEE207339F47173DFF  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t8218635FFE52C666262AEEAEE207339F47173DFF_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t8218635FFE52C666262AEEAEE207339F47173DFF_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T8218635FFE52C666262AEEAEE207339F47173DFF_H
#ifndef CASTER_1_T03D8E1F7D51ED3D2AE2677EDF3B6A0F0A4416AB5_H
#define CASTER_1_T03D8E1F7D51ED3D2AE2677EDF3B6A0F0A4416AB5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Double>
struct  Caster_1_t03D8E1F7D51ED3D2AE2677EDF3B6A0F0A4416AB5  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t03D8E1F7D51ED3D2AE2677EDF3B6A0F0A4416AB5_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t03D8E1F7D51ED3D2AE2677EDF3B6A0F0A4416AB5_StaticFields, ___Instance_0)); }
	inline Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T03D8E1F7D51ED3D2AE2677EDF3B6A0F0A4416AB5_H
#ifndef CASTER_1_T5932849F6E79E1885331632BE0371A5087A6DD8C_H
#define CASTER_1_T5932849F6E79E1885331632BE0371A5087A6DD8C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Guid>
struct  Caster_1_t5932849F6E79E1885331632BE0371A5087A6DD8C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5932849F6E79E1885331632BE0371A5087A6DD8C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5932849F6E79E1885331632BE0371A5087A6DD8C_StaticFields, ___Instance_0)); }
	inline Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T5932849F6E79E1885331632BE0371A5087A6DD8C_H
#ifndef CASTER_1_T1F87BBD03AF9272751C51F5D605EFEF43AB46FE1_H
#define CASTER_1_T1F87BBD03AF9272751C51F5D605EFEF43AB46FE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Int16>
struct  Caster_1_t1F87BBD03AF9272751C51F5D605EFEF43AB46FE1  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1F87BBD03AF9272751C51F5D605EFEF43AB46FE1_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1F87BBD03AF9272751C51F5D605EFEF43AB46FE1_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T1F87BBD03AF9272751C51F5D605EFEF43AB46FE1_H
#ifndef CASTER_1_TB23D3BA31E450FB0952F33E1D2DB4DBFCD754BE1_H
#define CASTER_1_TB23D3BA31E450FB0952F33E1D2DB4DBFCD754BE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Int32>
struct  Caster_1_tB23D3BA31E450FB0952F33E1D2DB4DBFCD754BE1  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB23D3BA31E450FB0952F33E1D2DB4DBFCD754BE1_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB23D3BA31E450FB0952F33E1D2DB4DBFCD754BE1_StaticFields, ___Instance_0)); }
	inline Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TB23D3BA31E450FB0952F33E1D2DB4DBFCD754BE1_H
#ifndef CASTER_1_TCA7F280780B937135FD0247CC90F5BCAD8963441_H
#define CASTER_1_TCA7F280780B937135FD0247CC90F5BCAD8963441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Int64>
struct  Caster_1_tCA7F280780B937135FD0247CC90F5BCAD8963441  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCA7F280780B937135FD0247CC90F5BCAD8963441_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCA7F280780B937135FD0247CC90F5BCAD8963441_StaticFields, ___Instance_0)); }
	inline Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TCA7F280780B937135FD0247CC90F5BCAD8963441_H
#ifndef CASTER_1_T33C636F2356154C6CDFA5421A2797B1F58F30BCC_H
#define CASTER_1_T33C636F2356154C6CDFA5421A2797B1F58F30BCC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.IntPtr>
struct  Caster_1_t33C636F2356154C6CDFA5421A2797B1F58F30BCC  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t33C636F2356154C6CDFA5421A2797B1F58F30BCC_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t33C636F2356154C6CDFA5421A2797B1F58F30BCC_StaticFields, ___Instance_0)); }
	inline Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T33C636F2356154C6CDFA5421A2797B1F58F30BCC_H
#ifndef CASTER_1_TF7A61263020C72F89182A7A8527DE53779F6D045_H
#define CASTER_1_TF7A61263020C72F89182A7A8527DE53779F6D045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Object>
struct  Caster_1_tF7A61263020C72F89182A7A8527DE53779F6D045  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF7A61263020C72F89182A7A8527DE53779F6D045_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF7A61263020C72F89182A7A8527DE53779F6D045_StaticFields, ___Instance_0)); }
	inline Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TF7A61263020C72F89182A7A8527DE53779F6D045_H
#ifndef CASTER_1_TE4ED47E76B44B007CC692D239C61ED53AE3DEC20_H
#define CASTER_1_TE4ED47E76B44B007CC692D239C61ED53AE3DEC20_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.SByte>
struct  Caster_1_tE4ED47E76B44B007CC692D239C61ED53AE3DEC20  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE4ED47E76B44B007CC692D239C61ED53AE3DEC20_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE4ED47E76B44B007CC692D239C61ED53AE3DEC20_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TE4ED47E76B44B007CC692D239C61ED53AE3DEC20_H
#ifndef CASTER_1_TFFE1731A5A18D2FC62FB4FD0E140F893FEFCBFBC_H
#define CASTER_1_TFFE1731A5A18D2FC62FB4FD0E140F893FEFCBFBC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Single>
struct  Caster_1_tFFE1731A5A18D2FC62FB4FD0E140F893FEFCBFBC  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tFFE1731A5A18D2FC62FB4FD0E140F893FEFCBFBC_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t761E0F084572634E94674D7C1912B56771C73045 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tFFE1731A5A18D2FC62FB4FD0E140F893FEFCBFBC_StaticFields, ___Instance_0)); }
	inline Transformer_1_t761E0F084572634E94674D7C1912B56771C73045 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t761E0F084572634E94674D7C1912B56771C73045 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t761E0F084572634E94674D7C1912B56771C73045 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TFFE1731A5A18D2FC62FB4FD0E140F893FEFCBFBC_H
#ifndef CASTER_1_TE7B6AE02946C8C7D035775855D3F8667EECF49F0_H
#define CASTER_1_TE7B6AE02946C8C7D035775855D3F8667EECF49F0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.TimeSpan>
struct  Caster_1_tE7B6AE02946C8C7D035775855D3F8667EECF49F0  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE7B6AE02946C8C7D035775855D3F8667EECF49F0_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE7B6AE02946C8C7D035775855D3F8667EECF49F0_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TE7B6AE02946C8C7D035775855D3F8667EECF49F0_H
#ifndef CASTER_1_TAB8276A53DE8D0B71D0C922FBDC1EA643B4B0801_H
#define CASTER_1_TAB8276A53DE8D0B71D0C922FBDC1EA643B4B0801_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.UInt16>
struct  Caster_1_tAB8276A53DE8D0B71D0C922FBDC1EA643B4B0801  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tAB8276A53DE8D0B71D0C922FBDC1EA643B4B0801_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tAB8276A53DE8D0B71D0C922FBDC1EA643B4B0801_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TAB8276A53DE8D0B71D0C922FBDC1EA643B4B0801_H
#ifndef CASTER_1_T46C35E368FA9C3535F632F4A43107C8C0DECDF2D_H
#define CASTER_1_T46C35E368FA9C3535F632F4A43107C8C0DECDF2D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.UInt32>
struct  Caster_1_t46C35E368FA9C3535F632F4A43107C8C0DECDF2D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t46C35E368FA9C3535F632F4A43107C8C0DECDF2D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t46C35E368FA9C3535F632F4A43107C8C0DECDF2D_StaticFields, ___Instance_0)); }
	inline Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T46C35E368FA9C3535F632F4A43107C8C0DECDF2D_H
#ifndef CASTER_1_T0DD4ACB69C178BCC9281945CB5322037FF50ACD4_H
#define CASTER_1_T0DD4ACB69C178BCC9281945CB5322037FF50ACD4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.UInt64>
struct  Caster_1_t0DD4ACB69C178BCC9281945CB5322037FF50ACD4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t0DD4ACB69C178BCC9281945CB5322037FF50ACD4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t0DD4ACB69C178BCC9281945CB5322037FF50ACD4_StaticFields, ___Instance_0)); }
	inline Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T0DD4ACB69C178BCC9281945CB5322037FF50ACD4_H
#ifndef CASTER_1_TAB93366D39B91199FA6BB514B138640EEA06D826_H
#define CASTER_1_TAB93366D39B91199FA6BB514B138640EEA06D826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.UIntPtr>
struct  Caster_1_tAB93366D39B91199FA6BB514B138640EEA06D826  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tAB93366D39B91199FA6BB514B138640EEA06D826_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tAB93366D39B91199FA6BB514B138640EEA06D826_StaticFields, ___Instance_0)); }
	inline Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TAB93366D39B91199FA6BB514B138640EEA06D826_H
#ifndef CASTER_1_T48A24901856804183E97D899F37E2B095C3D3AD0_H
#define CASTER_1_T48A24901856804183E97D899F37E2B095C3D3AD0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Boolean>
struct  Caster_1_t48A24901856804183E97D899F37E2B095C3D3AD0  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t48A24901856804183E97D899F37E2B095C3D3AD0_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t48A24901856804183E97D899F37E2B095C3D3AD0_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T48A24901856804183E97D899F37E2B095C3D3AD0_H
#ifndef CASTER_1_TB8F12CF62FE2B524624E09DCE78970BE6555258F_H
#define CASTER_1_TB8F12CF62FE2B524624E09DCE78970BE6555258F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Byte>
struct  Caster_1_tB8F12CF62FE2B524624E09DCE78970BE6555258F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB8F12CF62FE2B524624E09DCE78970BE6555258F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB8F12CF62FE2B524624E09DCE78970BE6555258F_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TB8F12CF62FE2B524624E09DCE78970BE6555258F_H
#ifndef CASTER_1_TD430240C674256CDF3116A5E5C05D32D14ADE25B_H
#define CASTER_1_TD430240C674256CDF3116A5E5C05D32D14ADE25B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Char>
struct  Caster_1_tD430240C674256CDF3116A5E5C05D32D14ADE25B  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tD430240C674256CDF3116A5E5C05D32D14ADE25B_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tD430240C674256CDF3116A5E5C05D32D14ADE25B_StaticFields, ___Instance_0)); }
	inline Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TD430240C674256CDF3116A5E5C05D32D14ADE25B_H
#ifndef CASTER_1_TA4C9DBDB9984A7DBDBE1E328A1E6D32056B598D5_H
#define CASTER_1_TA4C9DBDB9984A7DBDBE1E328A1E6D32056B598D5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_tA4C9DBDB9984A7DBDBE1E328A1E6D32056B598D5  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tA4C9DBDB9984A7DBDBE1E328A1E6D32056B598D5_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tA4C9DBDB9984A7DBDBE1E328A1E6D32056B598D5_StaticFields, ___Instance_0)); }
	inline Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TA4C9DBDB9984A7DBDBE1E328A1E6D32056B598D5_H
#ifndef CASTER_1_T910ED4892D830D9260544CCD5A5BA17D0EAAC5A7_H
#define CASTER_1_T910ED4892D830D9260544CCD5A5BA17D0EAAC5A7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.DateTime>
struct  Caster_1_t910ED4892D830D9260544CCD5A5BA17D0EAAC5A7  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t910ED4892D830D9260544CCD5A5BA17D0EAAC5A7_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t910ED4892D830D9260544CCD5A5BA17D0EAAC5A7_StaticFields, ___Instance_0)); }
	inline Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T910ED4892D830D9260544CCD5A5BA17D0EAAC5A7_H
#ifndef CASTER_1_T3B656E50540D77F8D98EC3723A33AD022BA02142_H
#define CASTER_1_T3B656E50540D77F8D98EC3723A33AD022BA02142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.DateTimeOffset>
struct  Caster_1_t3B656E50540D77F8D98EC3723A33AD022BA02142  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3B656E50540D77F8D98EC3723A33AD022BA02142_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3B656E50540D77F8D98EC3723A33AD022BA02142_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T3B656E50540D77F8D98EC3723A33AD022BA02142_H
#ifndef CASTER_1_T37CFBE48D145A145182032241D4C96C7A9651872_H
#define CASTER_1_T37CFBE48D145A145182032241D4C96C7A9651872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Decimal>
struct  Caster_1_t37CFBE48D145A145182032241D4C96C7A9651872  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t37CFBE48D145A145182032241D4C96C7A9651872_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t37CFBE48D145A145182032241D4C96C7A9651872_StaticFields, ___Instance_0)); }
	inline Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T37CFBE48D145A145182032241D4C96C7A9651872_H
#ifndef CASTER_1_T6C69308FA9D7112A4603D39468BDA09974918F69_H
#define CASTER_1_T6C69308FA9D7112A4603D39468BDA09974918F69_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_t6C69308FA9D7112A4603D39468BDA09974918F69  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t6C69308FA9D7112A4603D39468BDA09974918F69_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t6C69308FA9D7112A4603D39468BDA09974918F69_StaticFields, ___Instance_0)); }
	inline Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T6C69308FA9D7112A4603D39468BDA09974918F69_H
#ifndef CASTER_1_T667DCCFE8DA1234CBF65A5978B6D27BE63CD598A_H
#define CASTER_1_T667DCCFE8DA1234CBF65A5978B6D27BE63CD598A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Double>
struct  Caster_1_t667DCCFE8DA1234CBF65A5978B6D27BE63CD598A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t667DCCFE8DA1234CBF65A5978B6D27BE63CD598A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t667DCCFE8DA1234CBF65A5978B6D27BE63CD598A_StaticFields, ___Instance_0)); }
	inline Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T667DCCFE8DA1234CBF65A5978B6D27BE63CD598A_H
#ifndef CASTER_1_TB84AF4B31F4DAF0AB144E99A83CE997FB4C72D58_H
#define CASTER_1_TB84AF4B31F4DAF0AB144E99A83CE997FB4C72D58_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Guid>
struct  Caster_1_tB84AF4B31F4DAF0AB144E99A83CE997FB4C72D58  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB84AF4B31F4DAF0AB144E99A83CE997FB4C72D58_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB84AF4B31F4DAF0AB144E99A83CE997FB4C72D58_StaticFields, ___Instance_0)); }
	inline Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TB84AF4B31F4DAF0AB144E99A83CE997FB4C72D58_H
#ifndef CASTER_1_T10436C94D617CD0D6ABB2F7D073CFA27B74C1E30_H
#define CASTER_1_T10436C94D617CD0D6ABB2F7D073CFA27B74C1E30_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Int16>
struct  Caster_1_t10436C94D617CD0D6ABB2F7D073CFA27B74C1E30  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t10436C94D617CD0D6ABB2F7D073CFA27B74C1E30_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t10436C94D617CD0D6ABB2F7D073CFA27B74C1E30_StaticFields, ___Instance_0)); }
	inline Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T10436C94D617CD0D6ABB2F7D073CFA27B74C1E30_H
#ifndef CASTER_1_T14BB827E485FED333B17154453079AE34F1F49AD_H
#define CASTER_1_T14BB827E485FED333B17154453079AE34F1F49AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Int32>
struct  Caster_1_t14BB827E485FED333B17154453079AE34F1F49AD  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t14BB827E485FED333B17154453079AE34F1F49AD_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t14BB827E485FED333B17154453079AE34F1F49AD_StaticFields, ___Instance_0)); }
	inline Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T14BB827E485FED333B17154453079AE34F1F49AD_H
#ifndef CASTER_1_T7A312140662B26A86CC59C245C7C848163A49AB4_H
#define CASTER_1_T7A312140662B26A86CC59C245C7C848163A49AB4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Int64>
struct  Caster_1_t7A312140662B26A86CC59C245C7C848163A49AB4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7A312140662B26A86CC59C245C7C848163A49AB4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7A312140662B26A86CC59C245C7C848163A49AB4_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T7A312140662B26A86CC59C245C7C848163A49AB4_H
#ifndef CASTER_1_T9C36147697AE67003B8A0EF11EEF2516066D90C4_H
#define CASTER_1_T9C36147697AE67003B8A0EF11EEF2516066D90C4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.IntPtr>
struct  Caster_1_t9C36147697AE67003B8A0EF11EEF2516066D90C4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9C36147697AE67003B8A0EF11EEF2516066D90C4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9C36147697AE67003B8A0EF11EEF2516066D90C4_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T9C36147697AE67003B8A0EF11EEF2516066D90C4_H
#ifndef CASTER_1_T31EFD992543429652A6ED1652D545CCD372DB7C5_H
#define CASTER_1_T31EFD992543429652A6ED1652D545CCD372DB7C5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Object>
struct  Caster_1_t31EFD992543429652A6ED1652D545CCD372DB7C5  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t31EFD992543429652A6ED1652D545CCD372DB7C5_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t31EFD992543429652A6ED1652D545CCD372DB7C5_StaticFields, ___Instance_0)); }
	inline Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T31EFD992543429652A6ED1652D545CCD372DB7C5_H
#ifndef CASTER_1_T9347D88993875351431679E4107168C7CD28B825_H
#define CASTER_1_T9347D88993875351431679E4107168C7CD28B825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.SByte>
struct  Caster_1_t9347D88993875351431679E4107168C7CD28B825  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9347D88993875351431679E4107168C7CD28B825_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9347D88993875351431679E4107168C7CD28B825_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T9347D88993875351431679E4107168C7CD28B825_H
#ifndef CASTER_1_T3EA25BC7E67BA9A7DA94FB04B9939AA009AE1F2D_H
#define CASTER_1_T3EA25BC7E67BA9A7DA94FB04B9939AA009AE1F2D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Single>
struct  Caster_1_t3EA25BC7E67BA9A7DA94FB04B9939AA009AE1F2D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3EA25BC7E67BA9A7DA94FB04B9939AA009AE1F2D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3EA25BC7E67BA9A7DA94FB04B9939AA009AE1F2D_StaticFields, ___Instance_0)); }
	inline Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T3EA25BC7E67BA9A7DA94FB04B9939AA009AE1F2D_H
#ifndef CASTER_1_TFDA8B5B6F494CA32867BEDA1744607B9DE4AC7FD_H
#define CASTER_1_TFDA8B5B6F494CA32867BEDA1744607B9DE4AC7FD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.TimeSpan>
struct  Caster_1_tFDA8B5B6F494CA32867BEDA1744607B9DE4AC7FD  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tFDA8B5B6F494CA32867BEDA1744607B9DE4AC7FD_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tFDA8B5B6F494CA32867BEDA1744607B9DE4AC7FD_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TFDA8B5B6F494CA32867BEDA1744607B9DE4AC7FD_H
#ifndef CASTER_1_T5A5C0360CA0AE23E50B74262E52C01F758755C97_H
#define CASTER_1_T5A5C0360CA0AE23E50B74262E52C01F758755C97_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.UInt16>
struct  Caster_1_t5A5C0360CA0AE23E50B74262E52C01F758755C97  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5A5C0360CA0AE23E50B74262E52C01F758755C97_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5A5C0360CA0AE23E50B74262E52C01F758755C97_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T5A5C0360CA0AE23E50B74262E52C01F758755C97_H
#ifndef CASTER_1_T3A7D9F3C5EC2EF5D573D0A6E3F67BA58C73B050A_H
#define CASTER_1_T3A7D9F3C5EC2EF5D573D0A6E3F67BA58C73B050A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.UInt32>
struct  Caster_1_t3A7D9F3C5EC2EF5D573D0A6E3F67BA58C73B050A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3A7D9F3C5EC2EF5D573D0A6E3F67BA58C73B050A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3A7D9F3C5EC2EF5D573D0A6E3F67BA58C73B050A_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T3A7D9F3C5EC2EF5D573D0A6E3F67BA58C73B050A_H
#ifndef CASTER_1_T5606234865DF0152C73166D640BD2651AAC8D43E_H
#define CASTER_1_T5606234865DF0152C73166D640BD2651AAC8D43E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.UInt64>
struct  Caster_1_t5606234865DF0152C73166D640BD2651AAC8D43E  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5606234865DF0152C73166D640BD2651AAC8D43E_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5606234865DF0152C73166D640BD2651AAC8D43E_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T5606234865DF0152C73166D640BD2651AAC8D43E_H
#ifndef CASTER_1_T0233A96550545D6F17A5141586520D492131F3AF_H
#define CASTER_1_T0233A96550545D6F17A5141586520D492131F3AF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.UIntPtr>
struct  Caster_1_t0233A96550545D6F17A5141586520D492131F3AF  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t0233A96550545D6F17A5141586520D492131F3AF_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t0233A96550545D6F17A5141586520D492131F3AF_StaticFields, ___Instance_0)); }
	inline Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T0233A96550545D6F17A5141586520D492131F3AF_H
#ifndef CASTER_1_T78D880B4DED6A81AFFB3DA6D32BA8A0E295F3788_H
#define CASTER_1_T78D880B4DED6A81AFFB3DA6D32BA8A0E295F3788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Boolean>
struct  Caster_1_t78D880B4DED6A81AFFB3DA6D32BA8A0E295F3788  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t78D880B4DED6A81AFFB3DA6D32BA8A0E295F3788_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t78D880B4DED6A81AFFB3DA6D32BA8A0E295F3788_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T78D880B4DED6A81AFFB3DA6D32BA8A0E295F3788_H
#ifndef CASTER_1_TF1E9F5ACC455E168230D60D0AE5E848A5DBE2930_H
#define CASTER_1_TF1E9F5ACC455E168230D60D0AE5E848A5DBE2930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Byte>
struct  Caster_1_tF1E9F5ACC455E168230D60D0AE5E848A5DBE2930  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF1E9F5ACC455E168230D60D0AE5E848A5DBE2930_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF1E9F5ACC455E168230D60D0AE5E848A5DBE2930_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TF1E9F5ACC455E168230D60D0AE5E848A5DBE2930_H
#ifndef CASTER_1_T95AC156F3D75823ABA3B6749B8E5DAAF8EB6AB25_H
#define CASTER_1_T95AC156F3D75823ABA3B6749B8E5DAAF8EB6AB25_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Char>
struct  Caster_1_t95AC156F3D75823ABA3B6749B8E5DAAF8EB6AB25  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t95AC156F3D75823ABA3B6749B8E5DAAF8EB6AB25_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t95AC156F3D75823ABA3B6749B8E5DAAF8EB6AB25_StaticFields, ___Instance_0)); }
	inline Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T95AC156F3D75823ABA3B6749B8E5DAAF8EB6AB25_H
#ifndef CASTER_1_T8B6EA4487FE31C415BCD954287C70DF849E09E08_H
#define CASTER_1_T8B6EA4487FE31C415BCD954287C70DF849E09E08_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_t8B6EA4487FE31C415BCD954287C70DF849E09E08  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t8B6EA4487FE31C415BCD954287C70DF849E09E08_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t8B6EA4487FE31C415BCD954287C70DF849E09E08_StaticFields, ___Instance_0)); }
	inline Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T8B6EA4487FE31C415BCD954287C70DF849E09E08_H
#ifndef CASTER_1_T2314A24A7931390C6867F5AB59BCE7DF7875EDB6_H
#define CASTER_1_T2314A24A7931390C6867F5AB59BCE7DF7875EDB6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.DateTime>
struct  Caster_1_t2314A24A7931390C6867F5AB59BCE7DF7875EDB6  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t2314A24A7931390C6867F5AB59BCE7DF7875EDB6_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t2314A24A7931390C6867F5AB59BCE7DF7875EDB6_StaticFields, ___Instance_0)); }
	inline Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T2314A24A7931390C6867F5AB59BCE7DF7875EDB6_H
#ifndef CASTER_1_T39143C74EFB8AD6200EFEE9E31A9EBDC9718F1E5_H
#define CASTER_1_T39143C74EFB8AD6200EFEE9E31A9EBDC9718F1E5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.DateTimeOffset>
struct  Caster_1_t39143C74EFB8AD6200EFEE9E31A9EBDC9718F1E5  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t39143C74EFB8AD6200EFEE9E31A9EBDC9718F1E5_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t39143C74EFB8AD6200EFEE9E31A9EBDC9718F1E5_StaticFields, ___Instance_0)); }
	inline Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T39143C74EFB8AD6200EFEE9E31A9EBDC9718F1E5_H
#ifndef CASTER_1_T4B1D64CB72ED6461809D48568ECB009A92F781FE_H
#define CASTER_1_T4B1D64CB72ED6461809D48568ECB009A92F781FE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Decimal>
struct  Caster_1_t4B1D64CB72ED6461809D48568ECB009A92F781FE  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t4B1D64CB72ED6461809D48568ECB009A92F781FE_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t4B1D64CB72ED6461809D48568ECB009A92F781FE_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T4B1D64CB72ED6461809D48568ECB009A92F781FE_H
#ifndef CASTER_1_T279DFE68F30E6659059D94B02BD5361A9BBE40D4_H
#define CASTER_1_T279DFE68F30E6659059D94B02BD5361A9BBE40D4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_t279DFE68F30E6659059D94B02BD5361A9BBE40D4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t279DFE68F30E6659059D94B02BD5361A9BBE40D4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t279DFE68F30E6659059D94B02BD5361A9BBE40D4_StaticFields, ___Instance_0)); }
	inline Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T279DFE68F30E6659059D94B02BD5361A9BBE40D4_H
#ifndef CASTER_1_TFFC10B3F233B81FE8D4EA64668FE2EA15A433C6D_H
#define CASTER_1_TFFC10B3F233B81FE8D4EA64668FE2EA15A433C6D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Double>
struct  Caster_1_tFFC10B3F233B81FE8D4EA64668FE2EA15A433C6D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tFFC10B3F233B81FE8D4EA64668FE2EA15A433C6D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tFFC10B3F233B81FE8D4EA64668FE2EA15A433C6D_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TFFC10B3F233B81FE8D4EA64668FE2EA15A433C6D_H
#ifndef CASTER_1_T7F15074A7BC9B5DA634F74067B2CAA3E4D8C7379_H
#define CASTER_1_T7F15074A7BC9B5DA634F74067B2CAA3E4D8C7379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Guid>
struct  Caster_1_t7F15074A7BC9B5DA634F74067B2CAA3E4D8C7379  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7F15074A7BC9B5DA634F74067B2CAA3E4D8C7379_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7F15074A7BC9B5DA634F74067B2CAA3E4D8C7379_StaticFields, ___Instance_0)); }
	inline Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T7F15074A7BC9B5DA634F74067B2CAA3E4D8C7379_H
#ifndef CASTER_1_TE25B230380E2CE54B9276690CD814DE511450833_H
#define CASTER_1_TE25B230380E2CE54B9276690CD814DE511450833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Int16>
struct  Caster_1_tE25B230380E2CE54B9276690CD814DE511450833  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE25B230380E2CE54B9276690CD814DE511450833_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE25B230380E2CE54B9276690CD814DE511450833_StaticFields, ___Instance_0)); }
	inline Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TE25B230380E2CE54B9276690CD814DE511450833_H
#ifndef CASTER_1_T3B87E9C89959ABEE4F6F1172FFA2D99D20FEAF4D_H
#define CASTER_1_T3B87E9C89959ABEE4F6F1172FFA2D99D20FEAF4D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Int32>
struct  Caster_1_t3B87E9C89959ABEE4F6F1172FFA2D99D20FEAF4D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3B87E9C89959ABEE4F6F1172FFA2D99D20FEAF4D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3B87E9C89959ABEE4F6F1172FFA2D99D20FEAF4D_StaticFields, ___Instance_0)); }
	inline Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T3B87E9C89959ABEE4F6F1172FFA2D99D20FEAF4D_H
#ifndef CASTER_1_T7D3ABA04133A298DFD0422ADFEBDEF3656AF0031_H
#define CASTER_1_T7D3ABA04133A298DFD0422ADFEBDEF3656AF0031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Int64>
struct  Caster_1_t7D3ABA04133A298DFD0422ADFEBDEF3656AF0031  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7D3ABA04133A298DFD0422ADFEBDEF3656AF0031_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7D3ABA04133A298DFD0422ADFEBDEF3656AF0031_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T7D3ABA04133A298DFD0422ADFEBDEF3656AF0031_H
#ifndef CASTER_1_T9E4D034C656C467484BBD42F5B9FF5B91F790BED_H
#define CASTER_1_T9E4D034C656C467484BBD42F5B9FF5B91F790BED_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.IntPtr>
struct  Caster_1_t9E4D034C656C467484BBD42F5B9FF5B91F790BED  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9E4D034C656C467484BBD42F5B9FF5B91F790BED_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9E4D034C656C467484BBD42F5B9FF5B91F790BED_StaticFields, ___Instance_0)); }
	inline Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T9E4D034C656C467484BBD42F5B9FF5B91F790BED_H
#ifndef CASTER_1_T7F4B7F98CCD80CC0E1B52334B484C566B3772846_H
#define CASTER_1_T7F4B7F98CCD80CC0E1B52334B484C566B3772846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Object>
struct  Caster_1_t7F4B7F98CCD80CC0E1B52334B484C566B3772846  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7F4B7F98CCD80CC0E1B52334B484C566B3772846_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7F4B7F98CCD80CC0E1B52334B484C566B3772846_StaticFields, ___Instance_0)); }
	inline Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T7F4B7F98CCD80CC0E1B52334B484C566B3772846_H
#ifndef CASTER_1_TD1867CCD99C0E4D6779357AA6EAE58CA54AE0AF4_H
#define CASTER_1_TD1867CCD99C0E4D6779357AA6EAE58CA54AE0AF4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.SByte>
struct  Caster_1_tD1867CCD99C0E4D6779357AA6EAE58CA54AE0AF4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tD1867CCD99C0E4D6779357AA6EAE58CA54AE0AF4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tD1867CCD99C0E4D6779357AA6EAE58CA54AE0AF4_StaticFields, ___Instance_0)); }
	inline Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TD1867CCD99C0E4D6779357AA6EAE58CA54AE0AF4_H
#ifndef CASTER_1_TCADDC259BB0BC859D77522BE7660068F2B40F0FC_H
#define CASTER_1_TCADDC259BB0BC859D77522BE7660068F2B40F0FC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Single>
struct  Caster_1_tCADDC259BB0BC859D77522BE7660068F2B40F0FC  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCADDC259BB0BC859D77522BE7660068F2B40F0FC_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCADDC259BB0BC859D77522BE7660068F2B40F0FC_StaticFields, ___Instance_0)); }
	inline Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TCADDC259BB0BC859D77522BE7660068F2B40F0FC_H
#ifndef CASTER_1_TB392A04593C4239456BD2F10286A27F0AE928679_H
#define CASTER_1_TB392A04593C4239456BD2F10286A27F0AE928679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.TimeSpan>
struct  Caster_1_tB392A04593C4239456BD2F10286A27F0AE928679  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB392A04593C4239456BD2F10286A27F0AE928679_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB392A04593C4239456BD2F10286A27F0AE928679_StaticFields, ___Instance_0)); }
	inline Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TB392A04593C4239456BD2F10286A27F0AE928679_H
#ifndef CASTER_1_T9F5AB8620B99DD3C4BBDD28E6F5A78003016D254_H
#define CASTER_1_T9F5AB8620B99DD3C4BBDD28E6F5A78003016D254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.UInt16>
struct  Caster_1_t9F5AB8620B99DD3C4BBDD28E6F5A78003016D254  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9F5AB8620B99DD3C4BBDD28E6F5A78003016D254_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9F5AB8620B99DD3C4BBDD28E6F5A78003016D254_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T9F5AB8620B99DD3C4BBDD28E6F5A78003016D254_H
#ifndef CASTER_1_T5F92169CA22878B796AF5109203D193F987A4A39_H
#define CASTER_1_T5F92169CA22878B796AF5109203D193F987A4A39_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.UInt32>
struct  Caster_1_t5F92169CA22878B796AF5109203D193F987A4A39  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5F92169CA22878B796AF5109203D193F987A4A39_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5F92169CA22878B796AF5109203D193F987A4A39_StaticFields, ___Instance_0)); }
	inline Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T5F92169CA22878B796AF5109203D193F987A4A39_H
#ifndef CASTER_1_TF96225B214D9B7EE71FE55E75A65EBD3AFEFAB6C_H
#define CASTER_1_TF96225B214D9B7EE71FE55E75A65EBD3AFEFAB6C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.UInt64>
struct  Caster_1_tF96225B214D9B7EE71FE55E75A65EBD3AFEFAB6C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF96225B214D9B7EE71FE55E75A65EBD3AFEFAB6C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF96225B214D9B7EE71FE55E75A65EBD3AFEFAB6C_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TF96225B214D9B7EE71FE55E75A65EBD3AFEFAB6C_H
#ifndef CASTER_1_T02CDD619AF43E06FEDAB4F242EB5DAB284E98B19_H
#define CASTER_1_T02CDD619AF43E06FEDAB4F242EB5DAB284E98B19_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.UIntPtr>
struct  Caster_1_t02CDD619AF43E06FEDAB4F242EB5DAB284E98B19  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t02CDD619AF43E06FEDAB4F242EB5DAB284E98B19_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t02CDD619AF43E06FEDAB4F242EB5DAB284E98B19_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T02CDD619AF43E06FEDAB4F242EB5DAB284E98B19_H
#ifndef CASTER_1_T195DBA8A516B142DCC1ACA2DA98380583B5F1D8E_H
#define CASTER_1_T195DBA8A516B142DCC1ACA2DA98380583B5F1D8E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Object,System.Object>
struct  Caster_1_t195DBA8A516B142DCC1ACA2DA98380583B5F1D8E  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t195DBA8A516B142DCC1ACA2DA98380583B5F1D8E_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t195DBA8A516B142DCC1ACA2DA98380583B5F1D8E_StaticFields, ___Instance_0)); }
	inline Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T195DBA8A516B142DCC1ACA2DA98380583B5F1D8E_H
#ifndef CASTER_1_T9548AD2802014C51CE95C2D167F4C5AFF00F7AB0_H
#define CASTER_1_T9548AD2802014C51CE95C2D167F4C5AFF00F7AB0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Boolean>
struct  Caster_1_t9548AD2802014C51CE95C2D167F4C5AFF00F7AB0  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9548AD2802014C51CE95C2D167F4C5AFF00F7AB0_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9548AD2802014C51CE95C2D167F4C5AFF00F7AB0_StaticFields, ___Instance_0)); }
	inline Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T9548AD2802014C51CE95C2D167F4C5AFF00F7AB0_H
#ifndef CASTER_1_T6D09AA62870A76ABA6E5E4D301AFCCF93F194424_H
#define CASTER_1_T6D09AA62870A76ABA6E5E4D301AFCCF93F194424_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Byte>
struct  Caster_1_t6D09AA62870A76ABA6E5E4D301AFCCF93F194424  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t6D09AA62870A76ABA6E5E4D301AFCCF93F194424_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t6D09AA62870A76ABA6E5E4D301AFCCF93F194424_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T6D09AA62870A76ABA6E5E4D301AFCCF93F194424_H
#ifndef CASTER_1_T7BED5C159FA7237F00FC5BF1362A67DD3DEE749A_H
#define CASTER_1_T7BED5C159FA7237F00FC5BF1362A67DD3DEE749A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Char>
struct  Caster_1_t7BED5C159FA7237F00FC5BF1362A67DD3DEE749A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7BED5C159FA7237F00FC5BF1362A67DD3DEE749A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7BED5C159FA7237F00FC5BF1362A67DD3DEE749A_StaticFields, ___Instance_0)); }
	inline Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T7BED5C159FA7237F00FC5BF1362A67DD3DEE749A_H
#ifndef CASTER_1_TFE5F9417466A4CB788D519C7878ECCB397E668A1_H
#define CASTER_1_TFE5F9417466A4CB788D519C7878ECCB397E668A1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_tFE5F9417466A4CB788D519C7878ECCB397E668A1  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tFE5F9417466A4CB788D519C7878ECCB397E668A1_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tFE5F9417466A4CB788D519C7878ECCB397E668A1_StaticFields, ___Instance_0)); }
	inline Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TFE5F9417466A4CB788D519C7878ECCB397E668A1_H
#ifndef CASTER_1_TB027436891672D8E446545806D30A74D601A125F_H
#define CASTER_1_TB027436891672D8E446545806D30A74D601A125F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.DateTime>
struct  Caster_1_tB027436891672D8E446545806D30A74D601A125F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB027436891672D8E446545806D30A74D601A125F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB027436891672D8E446545806D30A74D601A125F_StaticFields, ___Instance_0)); }
	inline Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TB027436891672D8E446545806D30A74D601A125F_H
#ifndef CASTER_1_TC50D5F2635E0A7DCD57C363B1CA71CFEA00F93EF_H
#define CASTER_1_TC50D5F2635E0A7DCD57C363B1CA71CFEA00F93EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.DateTimeOffset>
struct  Caster_1_tC50D5F2635E0A7DCD57C363B1CA71CFEA00F93EF  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tC50D5F2635E0A7DCD57C363B1CA71CFEA00F93EF_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tC50D5F2635E0A7DCD57C363B1CA71CFEA00F93EF_StaticFields, ___Instance_0)); }
	inline Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TC50D5F2635E0A7DCD57C363B1CA71CFEA00F93EF_H
#ifndef CASTER_1_TE749C798EEF25AA04DF0E56627917C360336EBA4_H
#define CASTER_1_TE749C798EEF25AA04DF0E56627917C360336EBA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Decimal>
struct  Caster_1_tE749C798EEF25AA04DF0E56627917C360336EBA4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE749C798EEF25AA04DF0E56627917C360336EBA4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE749C798EEF25AA04DF0E56627917C360336EBA4_StaticFields, ___Instance_0)); }
	inline Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TE749C798EEF25AA04DF0E56627917C360336EBA4_H
#ifndef CASTER_1_T70BCB30FF0C2DF9E545F34DEF21271408068477F_H
#define CASTER_1_T70BCB30FF0C2DF9E545F34DEF21271408068477F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_t70BCB30FF0C2DF9E545F34DEF21271408068477F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t70BCB30FF0C2DF9E545F34DEF21271408068477F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t70BCB30FF0C2DF9E545F34DEF21271408068477F_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T70BCB30FF0C2DF9E545F34DEF21271408068477F_H
#ifndef CASTER_1_TC218F4859CF65473DA915EE5333EFDCFEE72392E_H
#define CASTER_1_TC218F4859CF65473DA915EE5333EFDCFEE72392E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Double>
struct  Caster_1_tC218F4859CF65473DA915EE5333EFDCFEE72392E  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tC218F4859CF65473DA915EE5333EFDCFEE72392E_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tC218F4859CF65473DA915EE5333EFDCFEE72392E_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TC218F4859CF65473DA915EE5333EFDCFEE72392E_H
#ifndef CASTER_1_T8409BE0ECE6FE2A29D79E7044752D251CB863421_H
#define CASTER_1_T8409BE0ECE6FE2A29D79E7044752D251CB863421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Guid>
struct  Caster_1_t8409BE0ECE6FE2A29D79E7044752D251CB863421  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t8409BE0ECE6FE2A29D79E7044752D251CB863421_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t8409BE0ECE6FE2A29D79E7044752D251CB863421_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T8409BE0ECE6FE2A29D79E7044752D251CB863421_H
#ifndef CASTER_1_T62F9F0EA0D2CF70BE880EC5B4DB6C4E3BD191FF1_H
#define CASTER_1_T62F9F0EA0D2CF70BE880EC5B4DB6C4E3BD191FF1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Int16>
struct  Caster_1_t62F9F0EA0D2CF70BE880EC5B4DB6C4E3BD191FF1  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t62F9F0EA0D2CF70BE880EC5B4DB6C4E3BD191FF1_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t62F9F0EA0D2CF70BE880EC5B4DB6C4E3BD191FF1_StaticFields, ___Instance_0)); }
	inline Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T62F9F0EA0D2CF70BE880EC5B4DB6C4E3BD191FF1_H
#ifndef CASTER_1_T12F7AE622EDC8B8147BB5162376EAEBD2A1A716D_H
#define CASTER_1_T12F7AE622EDC8B8147BB5162376EAEBD2A1A716D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Int32>
struct  Caster_1_t12F7AE622EDC8B8147BB5162376EAEBD2A1A716D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t12F7AE622EDC8B8147BB5162376EAEBD2A1A716D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t12F7AE622EDC8B8147BB5162376EAEBD2A1A716D_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T12F7AE622EDC8B8147BB5162376EAEBD2A1A716D_H
#ifndef CASTER_1_T9136EB8D74B86E14C4D0B7DE2699BB30FF62ADE0_H
#define CASTER_1_T9136EB8D74B86E14C4D0B7DE2699BB30FF62ADE0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Int64>
struct  Caster_1_t9136EB8D74B86E14C4D0B7DE2699BB30FF62ADE0  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9136EB8D74B86E14C4D0B7DE2699BB30FF62ADE0_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9136EB8D74B86E14C4D0B7DE2699BB30FF62ADE0_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T9136EB8D74B86E14C4D0B7DE2699BB30FF62ADE0_H
#ifndef CASTER_1_T3AEE07159271C04282D4520F761455EA4BF25B90_H
#define CASTER_1_T3AEE07159271C04282D4520F761455EA4BF25B90_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.IntPtr>
struct  Caster_1_t3AEE07159271C04282D4520F761455EA4BF25B90  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3AEE07159271C04282D4520F761455EA4BF25B90_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3AEE07159271C04282D4520F761455EA4BF25B90_StaticFields, ___Instance_0)); }
	inline Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T3AEE07159271C04282D4520F761455EA4BF25B90_H
#ifndef CASTER_1_TDE4AB1F4E3BD9C2B0BF368F239F02CD0D92D7D3B_H
#define CASTER_1_TDE4AB1F4E3BD9C2B0BF368F239F02CD0D92D7D3B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Object>
struct  Caster_1_tDE4AB1F4E3BD9C2B0BF368F239F02CD0D92D7D3B  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tDE4AB1F4E3BD9C2B0BF368F239F02CD0D92D7D3B_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tDE4AB1F4E3BD9C2B0BF368F239F02CD0D92D7D3B_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TDE4AB1F4E3BD9C2B0BF368F239F02CD0D92D7D3B_H
#ifndef CASTER_1_TCC08F4371265D272EC5F5C61F06234FB4C49F905_H
#define CASTER_1_TCC08F4371265D272EC5F5C61F06234FB4C49F905_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.SByte>
struct  Caster_1_tCC08F4371265D272EC5F5C61F06234FB4C49F905  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCC08F4371265D272EC5F5C61F06234FB4C49F905_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCC08F4371265D272EC5F5C61F06234FB4C49F905_StaticFields, ___Instance_0)); }
	inline Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TCC08F4371265D272EC5F5C61F06234FB4C49F905_H
#ifndef CASTER_1_TB1E0520D57EA2A38EB25F38157F7FAE2077D0519_H
#define CASTER_1_TB1E0520D57EA2A38EB25F38157F7FAE2077D0519_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Single>
struct  Caster_1_tB1E0520D57EA2A38EB25F38157F7FAE2077D0519  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB1E0520D57EA2A38EB25F38157F7FAE2077D0519_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB1E0520D57EA2A38EB25F38157F7FAE2077D0519_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TB1E0520D57EA2A38EB25F38157F7FAE2077D0519_H
#ifndef CASTER_1_T063FFE54B6E834FCAADA9B98B6556AFEC0411632_H
#define CASTER_1_T063FFE54B6E834FCAADA9B98B6556AFEC0411632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.TimeSpan>
struct  Caster_1_t063FFE54B6E834FCAADA9B98B6556AFEC0411632  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t063FFE54B6E834FCAADA9B98B6556AFEC0411632_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t063FFE54B6E834FCAADA9B98B6556AFEC0411632_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T063FFE54B6E834FCAADA9B98B6556AFEC0411632_H
#ifndef CASTER_1_TA4C712C2F66B1CCA6198D56E9156B3ED627F7E7F_H
#define CASTER_1_TA4C712C2F66B1CCA6198D56E9156B3ED627F7E7F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.UInt16>
struct  Caster_1_tA4C712C2F66B1CCA6198D56E9156B3ED627F7E7F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tA4C712C2F66B1CCA6198D56E9156B3ED627F7E7F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tA4C712C2F66B1CCA6198D56E9156B3ED627F7E7F_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TA4C712C2F66B1CCA6198D56E9156B3ED627F7E7F_H
#ifndef CASTER_1_T4E01ADD98CF6A52B499B239DD79900153A6E8CB9_H
#define CASTER_1_T4E01ADD98CF6A52B499B239DD79900153A6E8CB9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.UInt32>
struct  Caster_1_t4E01ADD98CF6A52B499B239DD79900153A6E8CB9  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t4E01ADD98CF6A52B499B239DD79900153A6E8CB9_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t4E01ADD98CF6A52B499B239DD79900153A6E8CB9_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T4E01ADD98CF6A52B499B239DD79900153A6E8CB9_H
#ifndef CASTER_1_TA76F3CD44521225217CEE9D5E70655913B3652F6_H
#define CASTER_1_TA76F3CD44521225217CEE9D5E70655913B3652F6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.UInt64>
struct  Caster_1_tA76F3CD44521225217CEE9D5E70655913B3652F6  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tA76F3CD44521225217CEE9D5E70655913B3652F6_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tA76F3CD44521225217CEE9D5E70655913B3652F6_StaticFields, ___Instance_0)); }
	inline Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TA76F3CD44521225217CEE9D5E70655913B3652F6_H
#ifndef CASTER_1_T27A7F78CA974CB9EB88650C0F7D4CCB345E0D6F0_H
#define CASTER_1_T27A7F78CA974CB9EB88650C0F7D4CCB345E0D6F0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.UIntPtr>
struct  Caster_1_t27A7F78CA974CB9EB88650C0F7D4CCB345E0D6F0  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t27A7F78CA974CB9EB88650C0F7D4CCB345E0D6F0_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t27A7F78CA974CB9EB88650C0F7D4CCB345E0D6F0_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T27A7F78CA974CB9EB88650C0F7D4CCB345E0D6F0_H
#ifndef CASTER_1_T2AC7FD1B9C92018FCD42D2FBB7DE1C15E7C6141D_H
#define CASTER_1_T2AC7FD1B9C92018FCD42D2FBB7DE1C15E7C6141D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Boolean>
struct  Caster_1_t2AC7FD1B9C92018FCD42D2FBB7DE1C15E7C6141D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t2AC7FD1B9C92018FCD42D2FBB7DE1C15E7C6141D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t2AC7FD1B9C92018FCD42D2FBB7DE1C15E7C6141D_StaticFields, ___Instance_0)); }
	inline Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T2AC7FD1B9C92018FCD42D2FBB7DE1C15E7C6141D_H
#ifndef CASTER_1_TA9F99D3DE3C2B79878574DA79394D40484CF909C_H
#define CASTER_1_TA9F99D3DE3C2B79878574DA79394D40484CF909C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Byte>
struct  Caster_1_tA9F99D3DE3C2B79878574DA79394D40484CF909C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tA9F99D3DE3C2B79878574DA79394D40484CF909C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tA9F99D3DE3C2B79878574DA79394D40484CF909C_StaticFields, ___Instance_0)); }
	inline Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TA9F99D3DE3C2B79878574DA79394D40484CF909C_H
#ifndef CASTER_1_T439110BADC840296B0301DC221E3742B2C8E8934_H
#define CASTER_1_T439110BADC840296B0301DC221E3742B2C8E8934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Char>
struct  Caster_1_t439110BADC840296B0301DC221E3742B2C8E8934  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t439110BADC840296B0301DC221E3742B2C8E8934_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t439110BADC840296B0301DC221E3742B2C8E8934_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T439110BADC840296B0301DC221E3742B2C8E8934_H
#ifndef CASTER_1_T9CF680A45E2713569B0D6E5DCD3ACE8E5CE11A5F_H
#define CASTER_1_T9CF680A45E2713569B0D6E5DCD3ACE8E5CE11A5F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_t9CF680A45E2713569B0D6E5DCD3ACE8E5CE11A5F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9CF680A45E2713569B0D6E5DCD3ACE8E5CE11A5F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9CF680A45E2713569B0D6E5DCD3ACE8E5CE11A5F_StaticFields, ___Instance_0)); }
	inline Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T9CF680A45E2713569B0D6E5DCD3ACE8E5CE11A5F_H
#ifndef CASTER_1_T45EEB8AA14910B5FE2FEA34EC88A9154085E86BC_H
#define CASTER_1_T45EEB8AA14910B5FE2FEA34EC88A9154085E86BC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.DateTime>
struct  Caster_1_t45EEB8AA14910B5FE2FEA34EC88A9154085E86BC  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t45EEB8AA14910B5FE2FEA34EC88A9154085E86BC_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t45EEB8AA14910B5FE2FEA34EC88A9154085E86BC_StaticFields, ___Instance_0)); }
	inline Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T45EEB8AA14910B5FE2FEA34EC88A9154085E86BC_H
#ifndef CASTER_1_T0AD7C98192FA0900645BFF7111DF2264C1F11843_H
#define CASTER_1_T0AD7C98192FA0900645BFF7111DF2264C1F11843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.DateTimeOffset>
struct  Caster_1_t0AD7C98192FA0900645BFF7111DF2264C1F11843  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t0AD7C98192FA0900645BFF7111DF2264C1F11843_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t0AD7C98192FA0900645BFF7111DF2264C1F11843_StaticFields, ___Instance_0)); }
	inline Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T0AD7C98192FA0900645BFF7111DF2264C1F11843_H
#ifndef CASTER_1_TB30E4B83744A2AB4B34E2140F09FF2DBAD9067A2_H
#define CASTER_1_TB30E4B83744A2AB4B34E2140F09FF2DBAD9067A2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Decimal>
struct  Caster_1_tB30E4B83744A2AB4B34E2140F09FF2DBAD9067A2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB30E4B83744A2AB4B34E2140F09FF2DBAD9067A2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB30E4B83744A2AB4B34E2140F09FF2DBAD9067A2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TB30E4B83744A2AB4B34E2140F09FF2DBAD9067A2_H
#ifndef CASTER_1_T9F48A0F7F413295607FDDD8C95EAA2A8FB1BA77F_H
#define CASTER_1_T9F48A0F7F413295607FDDD8C95EAA2A8FB1BA77F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_t9F48A0F7F413295607FDDD8C95EAA2A8FB1BA77F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9F48A0F7F413295607FDDD8C95EAA2A8FB1BA77F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9F48A0F7F413295607FDDD8C95EAA2A8FB1BA77F_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T9F48A0F7F413295607FDDD8C95EAA2A8FB1BA77F_H
#ifndef CASTER_1_TFA61F79F888D97CEE77D5548328774BE7E4EB84A_H
#define CASTER_1_TFA61F79F888D97CEE77D5548328774BE7E4EB84A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Double>
struct  Caster_1_tFA61F79F888D97CEE77D5548328774BE7E4EB84A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tFA61F79F888D97CEE77D5548328774BE7E4EB84A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tFA61F79F888D97CEE77D5548328774BE7E4EB84A_StaticFields, ___Instance_0)); }
	inline Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TFA61F79F888D97CEE77D5548328774BE7E4EB84A_H
#ifndef CASTER_1_T62DA063BB7BB019FFBE6B9ED3A08D069E330FE87_H
#define CASTER_1_T62DA063BB7BB019FFBE6B9ED3A08D069E330FE87_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Guid>
struct  Caster_1_t62DA063BB7BB019FFBE6B9ED3A08D069E330FE87  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t62DA063BB7BB019FFBE6B9ED3A08D069E330FE87_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t62DA063BB7BB019FFBE6B9ED3A08D069E330FE87_StaticFields, ___Instance_0)); }
	inline Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T62DA063BB7BB019FFBE6B9ED3A08D069E330FE87_H
#ifndef CASTER_1_TF5CE3C0B8FDD93C834FC13D907003475F7844594_H
#define CASTER_1_TF5CE3C0B8FDD93C834FC13D907003475F7844594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Int16>
struct  Caster_1_tF5CE3C0B8FDD93C834FC13D907003475F7844594  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF5CE3C0B8FDD93C834FC13D907003475F7844594_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF5CE3C0B8FDD93C834FC13D907003475F7844594_StaticFields, ___Instance_0)); }
	inline Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TF5CE3C0B8FDD93C834FC13D907003475F7844594_H
#ifndef CASTER_1_T8F8BD84B7E2CC9232254A7A82FBEA7C1C7227E24_H
#define CASTER_1_T8F8BD84B7E2CC9232254A7A82FBEA7C1C7227E24_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Int32>
struct  Caster_1_t8F8BD84B7E2CC9232254A7A82FBEA7C1C7227E24  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t8F8BD84B7E2CC9232254A7A82FBEA7C1C7227E24_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t8F8BD84B7E2CC9232254A7A82FBEA7C1C7227E24_StaticFields, ___Instance_0)); }
	inline Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T8F8BD84B7E2CC9232254A7A82FBEA7C1C7227E24_H
#ifndef CASTER_1_T7796DD6DA3A2E903A8337A4426EA117003E4FF07_H
#define CASTER_1_T7796DD6DA3A2E903A8337A4426EA117003E4FF07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Int64>
struct  Caster_1_t7796DD6DA3A2E903A8337A4426EA117003E4FF07  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7796DD6DA3A2E903A8337A4426EA117003E4FF07_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7796DD6DA3A2E903A8337A4426EA117003E4FF07_StaticFields, ___Instance_0)); }
	inline Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T7796DD6DA3A2E903A8337A4426EA117003E4FF07_H
#ifndef CASTER_1_TF06869CDE05BEA07C45D10B5C27C152492D8F494_H
#define CASTER_1_TF06869CDE05BEA07C45D10B5C27C152492D8F494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.IntPtr>
struct  Caster_1_tF06869CDE05BEA07C45D10B5C27C152492D8F494  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF06869CDE05BEA07C45D10B5C27C152492D8F494_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t873B2E4C2418F756278367655E1C64D654382460 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF06869CDE05BEA07C45D10B5C27C152492D8F494_StaticFields, ___Instance_0)); }
	inline Transformer_1_t873B2E4C2418F756278367655E1C64D654382460 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t873B2E4C2418F756278367655E1C64D654382460 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t873B2E4C2418F756278367655E1C64D654382460 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TF06869CDE05BEA07C45D10B5C27C152492D8F494_H
#ifndef CASTER_1_T0E97020316A62558167F5F018A989125D28729AD_H
#define CASTER_1_T0E97020316A62558167F5F018A989125D28729AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Object>
struct  Caster_1_t0E97020316A62558167F5F018A989125D28729AD  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t0E97020316A62558167F5F018A989125D28729AD_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t0E97020316A62558167F5F018A989125D28729AD_StaticFields, ___Instance_0)); }
	inline Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T0E97020316A62558167F5F018A989125D28729AD_H
#ifndef CASTER_1_T7194A004154AABF5CF224780C51648A67A6757A2_H
#define CASTER_1_T7194A004154AABF5CF224780C51648A67A6757A2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.SByte>
struct  Caster_1_t7194A004154AABF5CF224780C51648A67A6757A2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7194A004154AABF5CF224780C51648A67A6757A2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7194A004154AABF5CF224780C51648A67A6757A2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T7194A004154AABF5CF224780C51648A67A6757A2_H
#ifndef CASTER_1_T073650CFFC30F591C4E5B47753CBDF6EAEC9AA0D_H
#define CASTER_1_T073650CFFC30F591C4E5B47753CBDF6EAEC9AA0D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Single>
struct  Caster_1_t073650CFFC30F591C4E5B47753CBDF6EAEC9AA0D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t073650CFFC30F591C4E5B47753CBDF6EAEC9AA0D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t073650CFFC30F591C4E5B47753CBDF6EAEC9AA0D_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T073650CFFC30F591C4E5B47753CBDF6EAEC9AA0D_H
#ifndef CASTER_1_TC9893BC43C67D8FE44500C545C7D0B22FBDFA338_H
#define CASTER_1_TC9893BC43C67D8FE44500C545C7D0B22FBDFA338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.TimeSpan>
struct  Caster_1_tC9893BC43C67D8FE44500C545C7D0B22FBDFA338  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tC9893BC43C67D8FE44500C545C7D0B22FBDFA338_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tC9893BC43C67D8FE44500C545C7D0B22FBDFA338_StaticFields, ___Instance_0)); }
	inline Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TC9893BC43C67D8FE44500C545C7D0B22FBDFA338_H
#ifndef CASTER_1_T97E30322734EE96D22D5EDDDA8A32D7F28BF9E0D_H
#define CASTER_1_T97E30322734EE96D22D5EDDDA8A32D7F28BF9E0D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.UInt16>
struct  Caster_1_t97E30322734EE96D22D5EDDDA8A32D7F28BF9E0D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t97E30322734EE96D22D5EDDDA8A32D7F28BF9E0D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t97E30322734EE96D22D5EDDDA8A32D7F28BF9E0D_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T97E30322734EE96D22D5EDDDA8A32D7F28BF9E0D_H
#ifndef CASTER_1_TEAB5EDC98E125207E56614BEDA0E194CDB6A81D2_H
#define CASTER_1_TEAB5EDC98E125207E56614BEDA0E194CDB6A81D2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.UInt32>
struct  Caster_1_tEAB5EDC98E125207E56614BEDA0E194CDB6A81D2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tEAB5EDC98E125207E56614BEDA0E194CDB6A81D2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tEAB5EDC98E125207E56614BEDA0E194CDB6A81D2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TEAB5EDC98E125207E56614BEDA0E194CDB6A81D2_H
#ifndef CASTER_1_TE1468C16E0D935665BAFEAE58EC1DC80FEA18FD0_H
#define CASTER_1_TE1468C16E0D935665BAFEAE58EC1DC80FEA18FD0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.UInt64>
struct  Caster_1_tE1468C16E0D935665BAFEAE58EC1DC80FEA18FD0  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE1468C16E0D935665BAFEAE58EC1DC80FEA18FD0_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE1468C16E0D935665BAFEAE58EC1DC80FEA18FD0_StaticFields, ___Instance_0)); }
	inline Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TE1468C16E0D935665BAFEAE58EC1DC80FEA18FD0_H
#ifndef CASTER_1_T9DA7DEC0029E18FF11AF097849FFE2FD2B961C60_H
#define CASTER_1_T9DA7DEC0029E18FF11AF097849FFE2FD2B961C60_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.UIntPtr>
struct  Caster_1_t9DA7DEC0029E18FF11AF097849FFE2FD2B961C60  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9DA7DEC0029E18FF11AF097849FFE2FD2B961C60_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9DA7DEC0029E18FF11AF097849FFE2FD2B961C60_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T9DA7DEC0029E18FF11AF097849FFE2FD2B961C60_H
#ifndef CASTER_1_T1B6BC63943ECA453AF4038A2F429DC89D1C88504_H
#define CASTER_1_T1B6BC63943ECA453AF4038A2F429DC89D1C88504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Boolean>
struct  Caster_1_t1B6BC63943ECA453AF4038A2F429DC89D1C88504  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1B6BC63943ECA453AF4038A2F429DC89D1C88504_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1B6BC63943ECA453AF4038A2F429DC89D1C88504_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T1B6BC63943ECA453AF4038A2F429DC89D1C88504_H
#ifndef CASTER_1_T1E5C78F2324B0966F93815A21CF15C56A6D1D763_H
#define CASTER_1_T1E5C78F2324B0966F93815A21CF15C56A6D1D763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Byte>
struct  Caster_1_t1E5C78F2324B0966F93815A21CF15C56A6D1D763  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1E5C78F2324B0966F93815A21CF15C56A6D1D763_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1E5C78F2324B0966F93815A21CF15C56A6D1D763_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T1E5C78F2324B0966F93815A21CF15C56A6D1D763_H
#ifndef CASTER_1_TEED0D769437F89233D231DC79626AC0A6337593C_H
#define CASTER_1_TEED0D769437F89233D231DC79626AC0A6337593C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Char>
struct  Caster_1_tEED0D769437F89233D231DC79626AC0A6337593C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tEED0D769437F89233D231DC79626AC0A6337593C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tEED0D769437F89233D231DC79626AC0A6337593C_StaticFields, ___Instance_0)); }
	inline Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TEED0D769437F89233D231DC79626AC0A6337593C_H
#ifndef CASTER_1_T722135795C75F590A8BC1E4CE7DB7DDFFA14314A_H
#define CASTER_1_T722135795C75F590A8BC1E4CE7DB7DDFFA14314A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_t722135795C75F590A8BC1E4CE7DB7DDFFA14314A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t722135795C75F590A8BC1E4CE7DB7DDFFA14314A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t722135795C75F590A8BC1E4CE7DB7DDFFA14314A_StaticFields, ___Instance_0)); }
	inline Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T722135795C75F590A8BC1E4CE7DB7DDFFA14314A_H
#ifndef CASTER_1_T3F3455CCFC9311D353A7D8C4A42200408CA558BC_H
#define CASTER_1_T3F3455CCFC9311D353A7D8C4A42200408CA558BC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.DateTime>
struct  Caster_1_t3F3455CCFC9311D353A7D8C4A42200408CA558BC  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3F3455CCFC9311D353A7D8C4A42200408CA558BC_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3F3455CCFC9311D353A7D8C4A42200408CA558BC_StaticFields, ___Instance_0)); }
	inline Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T3F3455CCFC9311D353A7D8C4A42200408CA558BC_H
#ifndef CASTER_1_T2EE1EC204134DA58566A851DFA40A0B880948A86_H
#define CASTER_1_T2EE1EC204134DA58566A851DFA40A0B880948A86_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.DateTimeOffset>
struct  Caster_1_t2EE1EC204134DA58566A851DFA40A0B880948A86  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t2EE1EC204134DA58566A851DFA40A0B880948A86_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t2EE1EC204134DA58566A851DFA40A0B880948A86_StaticFields, ___Instance_0)); }
	inline Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T2EE1EC204134DA58566A851DFA40A0B880948A86_H
#ifndef CASTER_1_T0BBCE2A7CB1298EE3E1F92A4EE98EE1FEA34EC7F_H
#define CASTER_1_T0BBCE2A7CB1298EE3E1F92A4EE98EE1FEA34EC7F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Decimal>
struct  Caster_1_t0BBCE2A7CB1298EE3E1F92A4EE98EE1FEA34EC7F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t0BBCE2A7CB1298EE3E1F92A4EE98EE1FEA34EC7F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t0BBCE2A7CB1298EE3E1F92A4EE98EE1FEA34EC7F_StaticFields, ___Instance_0)); }
	inline Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T0BBCE2A7CB1298EE3E1F92A4EE98EE1FEA34EC7F_H
#ifndef CASTER_1_TEB26AB756A5FFD5D46CEFADFD4354B569FE79E35_H
#define CASTER_1_TEB26AB756A5FFD5D46CEFADFD4354B569FE79E35_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_tEB26AB756A5FFD5D46CEFADFD4354B569FE79E35  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tEB26AB756A5FFD5D46CEFADFD4354B569FE79E35_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tEB26AB756A5FFD5D46CEFADFD4354B569FE79E35_StaticFields, ___Instance_0)); }
	inline Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TEB26AB756A5FFD5D46CEFADFD4354B569FE79E35_H
#ifndef CASTER_1_T4EF5B9F285768775D3C068FAF5475BD3A7560098_H
#define CASTER_1_T4EF5B9F285768775D3C068FAF5475BD3A7560098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Double>
struct  Caster_1_t4EF5B9F285768775D3C068FAF5475BD3A7560098  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t4EF5B9F285768775D3C068FAF5475BD3A7560098_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t4EF5B9F285768775D3C068FAF5475BD3A7560098_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T4EF5B9F285768775D3C068FAF5475BD3A7560098_H
#ifndef CASTER_1_T82D455B6810AAD5E0FB1B33CBEAE2D7F6B1215C1_H
#define CASTER_1_T82D455B6810AAD5E0FB1B33CBEAE2D7F6B1215C1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Guid>
struct  Caster_1_t82D455B6810AAD5E0FB1B33CBEAE2D7F6B1215C1  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t82D455B6810AAD5E0FB1B33CBEAE2D7F6B1215C1_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t82D455B6810AAD5E0FB1B33CBEAE2D7F6B1215C1_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T82D455B6810AAD5E0FB1B33CBEAE2D7F6B1215C1_H
#ifndef CASTER_1_TFBB6815F7209EA2669845E4F5390708755B6A996_H
#define CASTER_1_TFBB6815F7209EA2669845E4F5390708755B6A996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Int16>
struct  Caster_1_tFBB6815F7209EA2669845E4F5390708755B6A996  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tFBB6815F7209EA2669845E4F5390708755B6A996_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tFBB6815F7209EA2669845E4F5390708755B6A996_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TFBB6815F7209EA2669845E4F5390708755B6A996_H
#ifndef CASTER_1_T79F9BB0534172847D8A8840D22FEA3ACBF6E2E30_H
#define CASTER_1_T79F9BB0534172847D8A8840D22FEA3ACBF6E2E30_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Int32>
struct  Caster_1_t79F9BB0534172847D8A8840D22FEA3ACBF6E2E30  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t79F9BB0534172847D8A8840D22FEA3ACBF6E2E30_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t79F9BB0534172847D8A8840D22FEA3ACBF6E2E30_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T79F9BB0534172847D8A8840D22FEA3ACBF6E2E30_H
#ifndef CASTER_1_T2E73FCE9B801A6C9D2357B69DB15EE7FF8CCDBD8_H
#define CASTER_1_T2E73FCE9B801A6C9D2357B69DB15EE7FF8CCDBD8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Int64>
struct  Caster_1_t2E73FCE9B801A6C9D2357B69DB15EE7FF8CCDBD8  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t2E73FCE9B801A6C9D2357B69DB15EE7FF8CCDBD8_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t2E73FCE9B801A6C9D2357B69DB15EE7FF8CCDBD8_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T2E73FCE9B801A6C9D2357B69DB15EE7FF8CCDBD8_H
#ifndef CASTER_1_T7428F42D13DDC0C1A066BD1EE9BC521E66BA5BC1_H
#define CASTER_1_T7428F42D13DDC0C1A066BD1EE9BC521E66BA5BC1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.IntPtr>
struct  Caster_1_t7428F42D13DDC0C1A066BD1EE9BC521E66BA5BC1  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7428F42D13DDC0C1A066BD1EE9BC521E66BA5BC1_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7428F42D13DDC0C1A066BD1EE9BC521E66BA5BC1_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T7428F42D13DDC0C1A066BD1EE9BC521E66BA5BC1_H
#ifndef CASTER_1_TB69CF02AAB845E9B3DDB7E61DDA09AE13B6C05C2_H
#define CASTER_1_TB69CF02AAB845E9B3DDB7E61DDA09AE13B6C05C2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Object>
struct  Caster_1_tB69CF02AAB845E9B3DDB7E61DDA09AE13B6C05C2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB69CF02AAB845E9B3DDB7E61DDA09AE13B6C05C2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB69CF02AAB845E9B3DDB7E61DDA09AE13B6C05C2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TB69CF02AAB845E9B3DDB7E61DDA09AE13B6C05C2_H
#ifndef CASTER_1_T5B781D2583194FDAD58A1DEB85D1364FB241544E_H
#define CASTER_1_T5B781D2583194FDAD58A1DEB85D1364FB241544E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.SByte>
struct  Caster_1_t5B781D2583194FDAD58A1DEB85D1364FB241544E  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5B781D2583194FDAD58A1DEB85D1364FB241544E_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5B781D2583194FDAD58A1DEB85D1364FB241544E_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T5B781D2583194FDAD58A1DEB85D1364FB241544E_H
#ifndef CASTER_1_TFB47F8B972002AEAC72800811486FA13E467A8BF_H
#define CASTER_1_TFB47F8B972002AEAC72800811486FA13E467A8BF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Single>
struct  Caster_1_tFB47F8B972002AEAC72800811486FA13E467A8BF  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tFB47F8B972002AEAC72800811486FA13E467A8BF_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tFB47F8B972002AEAC72800811486FA13E467A8BF_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TFB47F8B972002AEAC72800811486FA13E467A8BF_H
#ifndef CASTER_1_TC8767D376B189ACD381153C9C173514211A0FE0F_H
#define CASTER_1_TC8767D376B189ACD381153C9C173514211A0FE0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.TimeSpan>
struct  Caster_1_tC8767D376B189ACD381153C9C173514211A0FE0F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tC8767D376B189ACD381153C9C173514211A0FE0F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tC8767D376B189ACD381153C9C173514211A0FE0F_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TC8767D376B189ACD381153C9C173514211A0FE0F_H
#ifndef CASTER_1_T42992A2C9D038623500C211031C77C7208D43273_H
#define CASTER_1_T42992A2C9D038623500C211031C77C7208D43273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.UInt16>
struct  Caster_1_t42992A2C9D038623500C211031C77C7208D43273  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t42992A2C9D038623500C211031C77C7208D43273_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t42992A2C9D038623500C211031C77C7208D43273_StaticFields, ___Instance_0)); }
	inline Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T42992A2C9D038623500C211031C77C7208D43273_H
#ifndef CASTER_1_T87A4B6548293C1368DDFCB40BA06CF49106148F9_H
#define CASTER_1_T87A4B6548293C1368DDFCB40BA06CF49106148F9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.UInt32>
struct  Caster_1_t87A4B6548293C1368DDFCB40BA06CF49106148F9  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t87A4B6548293C1368DDFCB40BA06CF49106148F9_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t87A4B6548293C1368DDFCB40BA06CF49106148F9_StaticFields, ___Instance_0)); }
	inline Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T87A4B6548293C1368DDFCB40BA06CF49106148F9_H
#ifndef CASTER_1_TFD458BDD72B070794987225E3DB7C380E3CC37D2_H
#define CASTER_1_TFD458BDD72B070794987225E3DB7C380E3CC37D2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.UInt64>
struct  Caster_1_tFD458BDD72B070794987225E3DB7C380E3CC37D2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tFD458BDD72B070794987225E3DB7C380E3CC37D2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tFD458BDD72B070794987225E3DB7C380E3CC37D2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TFD458BDD72B070794987225E3DB7C380E3CC37D2_H
#ifndef CASTER_1_T941B28C129B116297C114C4519CDE8190AB5C2D9_H
#define CASTER_1_T941B28C129B116297C114C4519CDE8190AB5C2D9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.UIntPtr>
struct  Caster_1_t941B28C129B116297C114C4519CDE8190AB5C2D9  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t941B28C129B116297C114C4519CDE8190AB5C2D9_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t941B28C129B116297C114C4519CDE8190AB5C2D9_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T941B28C129B116297C114C4519CDE8190AB5C2D9_H
#ifndef CASTER_1_TD2A776BD441B8E1E656DBDBEA29CE09F6370B01D_H
#define CASTER_1_TD2A776BD441B8E1E656DBDBEA29CE09F6370B01D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Boolean>
struct  Caster_1_tD2A776BD441B8E1E656DBDBEA29CE09F6370B01D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tD2A776BD441B8E1E656DBDBEA29CE09F6370B01D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tD2A776BD441B8E1E656DBDBEA29CE09F6370B01D_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TD2A776BD441B8E1E656DBDBEA29CE09F6370B01D_H
#ifndef CASTER_1_T482CB7C00B7672BE86AB37B58803EDDA5253C159_H
#define CASTER_1_T482CB7C00B7672BE86AB37B58803EDDA5253C159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Byte>
struct  Caster_1_t482CB7C00B7672BE86AB37B58803EDDA5253C159  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t482CB7C00B7672BE86AB37B58803EDDA5253C159_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t482CB7C00B7672BE86AB37B58803EDDA5253C159_StaticFields, ___Instance_0)); }
	inline Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T482CB7C00B7672BE86AB37B58803EDDA5253C159_H
#ifndef CASTER_1_TC3C7676E4988AB84AD5D483DF6D6D51F652B8EAA_H
#define CASTER_1_TC3C7676E4988AB84AD5D483DF6D6D51F652B8EAA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Char>
struct  Caster_1_tC3C7676E4988AB84AD5D483DF6D6D51F652B8EAA  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tC3C7676E4988AB84AD5D483DF6D6D51F652B8EAA_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tC3C7676E4988AB84AD5D483DF6D6D51F652B8EAA_StaticFields, ___Instance_0)); }
	inline Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TC3C7676E4988AB84AD5D483DF6D6D51F652B8EAA_H
#ifndef CASTER_1_TAEB42C1C02AED929BC1BEC04D98C0DF0C1BEFFC8_H
#define CASTER_1_TAEB42C1C02AED929BC1BEC04D98C0DF0C1BEFFC8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_tAEB42C1C02AED929BC1BEC04D98C0DF0C1BEFFC8  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tAEB42C1C02AED929BC1BEC04D98C0DF0C1BEFFC8_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tAEB42C1C02AED929BC1BEC04D98C0DF0C1BEFFC8_StaticFields, ___Instance_0)); }
	inline Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TAEB42C1C02AED929BC1BEC04D98C0DF0C1BEFFC8_H
#ifndef CASTER_1_TCDE1BC83F41D1B9514A301F4F689ECD00B852E4B_H
#define CASTER_1_TCDE1BC83F41D1B9514A301F4F689ECD00B852E4B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.DateTime>
struct  Caster_1_tCDE1BC83F41D1B9514A301F4F689ECD00B852E4B  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCDE1BC83F41D1B9514A301F4F689ECD00B852E4B_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCDE1BC83F41D1B9514A301F4F689ECD00B852E4B_StaticFields, ___Instance_0)); }
	inline Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TCDE1BC83F41D1B9514A301F4F689ECD00B852E4B_H
#ifndef CASTER_1_T648D614B6DE9FA1B879A571830C1B8BC23894BC0_H
#define CASTER_1_T648D614B6DE9FA1B879A571830C1B8BC23894BC0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.DateTimeOffset>
struct  Caster_1_t648D614B6DE9FA1B879A571830C1B8BC23894BC0  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t648D614B6DE9FA1B879A571830C1B8BC23894BC0_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t648D614B6DE9FA1B879A571830C1B8BC23894BC0_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T648D614B6DE9FA1B879A571830C1B8BC23894BC0_H
#ifndef CASTER_1_T4F5F7A38C557F7B9436C5C1F5FF63A6B645F482C_H
#define CASTER_1_T4F5F7A38C557F7B9436C5C1F5FF63A6B645F482C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Decimal>
struct  Caster_1_t4F5F7A38C557F7B9436C5C1F5FF63A6B645F482C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t4F5F7A38C557F7B9436C5C1F5FF63A6B645F482C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t4F5F7A38C557F7B9436C5C1F5FF63A6B645F482C_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T4F5F7A38C557F7B9436C5C1F5FF63A6B645F482C_H
#ifndef CASTER_1_T816F760E4CB91E8ED4749C51E1906DAA5FBFCBDD_H
#define CASTER_1_T816F760E4CB91E8ED4749C51E1906DAA5FBFCBDD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_t816F760E4CB91E8ED4749C51E1906DAA5FBFCBDD  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t816F760E4CB91E8ED4749C51E1906DAA5FBFCBDD_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t816F760E4CB91E8ED4749C51E1906DAA5FBFCBDD_StaticFields, ___Instance_0)); }
	inline Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T816F760E4CB91E8ED4749C51E1906DAA5FBFCBDD_H
#ifndef CASTER_1_TCA85C27159D944B0FA3E9E3AF4E43F1301C0856A_H
#define CASTER_1_TCA85C27159D944B0FA3E9E3AF4E43F1301C0856A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Double>
struct  Caster_1_tCA85C27159D944B0FA3E9E3AF4E43F1301C0856A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCA85C27159D944B0FA3E9E3AF4E43F1301C0856A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCA85C27159D944B0FA3E9E3AF4E43F1301C0856A_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TCA85C27159D944B0FA3E9E3AF4E43F1301C0856A_H
#ifndef CASTER_1_T32E967508060A04E0F6F4A5A9E516B2751446098_H
#define CASTER_1_T32E967508060A04E0F6F4A5A9E516B2751446098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Guid>
struct  Caster_1_t32E967508060A04E0F6F4A5A9E516B2751446098  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t32E967508060A04E0F6F4A5A9E516B2751446098_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t32E967508060A04E0F6F4A5A9E516B2751446098_StaticFields, ___Instance_0)); }
	inline Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T32E967508060A04E0F6F4A5A9E516B2751446098_H
#ifndef CASTER_1_TF3538AE7B545B5E66C20C4C751A1EAEE76E82FEF_H
#define CASTER_1_TF3538AE7B545B5E66C20C4C751A1EAEE76E82FEF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Int16>
struct  Caster_1_tF3538AE7B545B5E66C20C4C751A1EAEE76E82FEF  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF3538AE7B545B5E66C20C4C751A1EAEE76E82FEF_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF3538AE7B545B5E66C20C4C751A1EAEE76E82FEF_StaticFields, ___Instance_0)); }
	inline Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TF3538AE7B545B5E66C20C4C751A1EAEE76E82FEF_H
#ifndef CASTER_1_T053E7CA3C6B09080F453D7B9ADCED0B07B7355B2_H
#define CASTER_1_T053E7CA3C6B09080F453D7B9ADCED0B07B7355B2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Int32>
struct  Caster_1_t053E7CA3C6B09080F453D7B9ADCED0B07B7355B2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t053E7CA3C6B09080F453D7B9ADCED0B07B7355B2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t053E7CA3C6B09080F453D7B9ADCED0B07B7355B2_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T053E7CA3C6B09080F453D7B9ADCED0B07B7355B2_H
#ifndef CASTER_1_T3DD97367B1E8C9F032197273CF90E5919C74B518_H
#define CASTER_1_T3DD97367B1E8C9F032197273CF90E5919C74B518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Int64>
struct  Caster_1_t3DD97367B1E8C9F032197273CF90E5919C74B518  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3DD97367B1E8C9F032197273CF90E5919C74B518_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3DD97367B1E8C9F032197273CF90E5919C74B518_StaticFields, ___Instance_0)); }
	inline Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T3DD97367B1E8C9F032197273CF90E5919C74B518_H
#ifndef CASTER_1_T3E5340F9C3D63DE7B3280B37BCD14B25362CC87E_H
#define CASTER_1_T3E5340F9C3D63DE7B3280B37BCD14B25362CC87E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.IntPtr>
struct  Caster_1_t3E5340F9C3D63DE7B3280B37BCD14B25362CC87E  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3E5340F9C3D63DE7B3280B37BCD14B25362CC87E_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3E5340F9C3D63DE7B3280B37BCD14B25362CC87E_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T3E5340F9C3D63DE7B3280B37BCD14B25362CC87E_H
#ifndef CASTER_1_T1C8C6FEDED1BBCC86BF7F183BAAA65A65E37F6B9_H
#define CASTER_1_T1C8C6FEDED1BBCC86BF7F183BAAA65A65E37F6B9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Object>
struct  Caster_1_t1C8C6FEDED1BBCC86BF7F183BAAA65A65E37F6B9  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1C8C6FEDED1BBCC86BF7F183BAAA65A65E37F6B9_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1C8C6FEDED1BBCC86BF7F183BAAA65A65E37F6B9_StaticFields, ___Instance_0)); }
	inline Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T1C8C6FEDED1BBCC86BF7F183BAAA65A65E37F6B9_H
#ifndef CASTER_1_T261B67D54DDBEE2E45C594357E6132EBCFC20C43_H
#define CASTER_1_T261B67D54DDBEE2E45C594357E6132EBCFC20C43_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.SByte>
struct  Caster_1_t261B67D54DDBEE2E45C594357E6132EBCFC20C43  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t261B67D54DDBEE2E45C594357E6132EBCFC20C43_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t261B67D54DDBEE2E45C594357E6132EBCFC20C43_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T261B67D54DDBEE2E45C594357E6132EBCFC20C43_H
#ifndef CASTER_1_T758D846F58655E22B936DD8A2DB64283EA3805A2_H
#define CASTER_1_T758D846F58655E22B936DD8A2DB64283EA3805A2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Single>
struct  Caster_1_t758D846F58655E22B936DD8A2DB64283EA3805A2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t758D846F58655E22B936DD8A2DB64283EA3805A2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t758D846F58655E22B936DD8A2DB64283EA3805A2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T758D846F58655E22B936DD8A2DB64283EA3805A2_H
#ifndef CASTER_1_T01551B272EDA007DB4640BBDA9745FCD8150E90F_H
#define CASTER_1_T01551B272EDA007DB4640BBDA9745FCD8150E90F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.TimeSpan>
struct  Caster_1_t01551B272EDA007DB4640BBDA9745FCD8150E90F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t01551B272EDA007DB4640BBDA9745FCD8150E90F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t01551B272EDA007DB4640BBDA9745FCD8150E90F_StaticFields, ___Instance_0)); }
	inline Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T01551B272EDA007DB4640BBDA9745FCD8150E90F_H
#ifndef CASTER_1_T927662BF5FDD93421514AD6DFF5810834FC65437_H
#define CASTER_1_T927662BF5FDD93421514AD6DFF5810834FC65437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.UInt16>
struct  Caster_1_t927662BF5FDD93421514AD6DFF5810834FC65437  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t927662BF5FDD93421514AD6DFF5810834FC65437_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t927662BF5FDD93421514AD6DFF5810834FC65437_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T927662BF5FDD93421514AD6DFF5810834FC65437_H
#ifndef CASTER_1_T4FBD60419DE1522A1D8D6D26E18CCE6C5CBE862C_H
#define CASTER_1_T4FBD60419DE1522A1D8D6D26E18CCE6C5CBE862C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.UInt32>
struct  Caster_1_t4FBD60419DE1522A1D8D6D26E18CCE6C5CBE862C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t4FBD60419DE1522A1D8D6D26E18CCE6C5CBE862C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t4FBD60419DE1522A1D8D6D26E18CCE6C5CBE862C_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_T4FBD60419DE1522A1D8D6D26E18CCE6C5CBE862C_H
#ifndef CASTER_1_TCD382BFE18B540FD55BB3D1DE0739E2718F2B9F7_H
#define CASTER_1_TCD382BFE18B540FD55BB3D1DE0739E2718F2B9F7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.UInt64>
struct  Caster_1_tCD382BFE18B540FD55BB3D1DE0739E2718F2B9F7  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCD382BFE18B540FD55BB3D1DE0739E2718F2B9F7_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCD382BFE18B540FD55BB3D1DE0739E2718F2B9F7_StaticFields, ___Instance_0)); }
	inline Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TCD382BFE18B540FD55BB3D1DE0739E2718F2B9F7_H
#ifndef CASTER_1_TE9665C2AD78EA0AECF9AA50DC59E256EA789B56B_H
#define CASTER_1_TE9665C2AD78EA0AECF9AA50DC59E256EA789B56B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.UIntPtr>
struct  Caster_1_tE9665C2AD78EA0AECF9AA50DC59E256EA789B56B  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE9665C2AD78EA0AECF9AA50DC59E256EA789B56B_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE9665C2AD78EA0AECF9AA50DC59E256EA789B56B_StaticFields, ___Instance_0)); }
	inline Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTER_1_TE9665C2AD78EA0AECF9AA50DC59E256EA789B56B_H
#ifndef ENUMHELPER_1_TCD9C6B46C79CF3B8A9228DF132E8EB369F254C82_H
#define ENUMHELPER_1_TCD9C6B46C79CF3B8A9228DF132E8EB369F254C82_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1<System.Byte>
struct  EnumHelper_1_tCD9C6B46C79CF3B8A9228DF132E8EB369F254C82  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_tCD9C6B46C79CF3B8A9228DF132E8EB369F254C82_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_tCD9C6B46C79CF3B8A9228DF132E8EB369F254C82_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___IdentityInfo_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMHELPER_1_TCD9C6B46C79CF3B8A9228DF132E8EB369F254C82_H
#ifndef ENUMHELPER_1_T70C30A1B36497D83A015022E6BB524A187CFAFC7_H
#define ENUMHELPER_1_T70C30A1B36497D83A015022E6BB524A187CFAFC7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1<System.Int16>
struct  EnumHelper_1_t70C30A1B36497D83A015022E6BB524A187CFAFC7  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t70C30A1B36497D83A015022E6BB524A187CFAFC7_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t70C30A1B36497D83A015022E6BB524A187CFAFC7_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___IdentityInfo_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMHELPER_1_T70C30A1B36497D83A015022E6BB524A187CFAFC7_H
#ifndef ENUMHELPER_1_T26411DBF6873AF1883D85665AA592CC54B8015EB_H
#define ENUMHELPER_1_T26411DBF6873AF1883D85665AA592CC54B8015EB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1<System.Int32>
struct  EnumHelper_1_t26411DBF6873AF1883D85665AA592CC54B8015EB  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t26411DBF6873AF1883D85665AA592CC54B8015EB_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t26411DBF6873AF1883D85665AA592CC54B8015EB_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___IdentityInfo_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMHELPER_1_T26411DBF6873AF1883D85665AA592CC54B8015EB_H
#ifndef ENUMHELPER_1_T7766047F041B50F63B0724CEB9FC3DF493563942_H
#define ENUMHELPER_1_T7766047F041B50F63B0724CEB9FC3DF493563942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1<System.Int64>
struct  EnumHelper_1_t7766047F041B50F63B0724CEB9FC3DF493563942  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t7766047F041B50F63B0724CEB9FC3DF493563942_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t7766047F041B50F63B0724CEB9FC3DF493563942_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___IdentityInfo_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMHELPER_1_T7766047F041B50F63B0724CEB9FC3DF493563942_H
#ifndef ENUMHELPER_1_T13741AF87195F19C45AE0A8104DE3A894D9E78AD_H
#define ENUMHELPER_1_T13741AF87195F19C45AE0A8104DE3A894D9E78AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1<System.Object>
struct  EnumHelper_1_t13741AF87195F19C45AE0A8104DE3A894D9E78AD  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t13741AF87195F19C45AE0A8104DE3A894D9E78AD_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t13741AF87195F19C45AE0A8104DE3A894D9E78AD_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___IdentityInfo_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMHELPER_1_T13741AF87195F19C45AE0A8104DE3A894D9E78AD_H
#ifndef ENUMHELPER_1_TB725A0B0F692F58B04B5C2851987ED5557FFF3E2_H
#define ENUMHELPER_1_TB725A0B0F692F58B04B5C2851987ED5557FFF3E2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1<System.SByte>
struct  EnumHelper_1_tB725A0B0F692F58B04B5C2851987ED5557FFF3E2  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_tB725A0B0F692F58B04B5C2851987ED5557FFF3E2_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_tB725A0B0F692F58B04B5C2851987ED5557FFF3E2_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___IdentityInfo_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMHELPER_1_TB725A0B0F692F58B04B5C2851987ED5557FFF3E2_H
#ifndef ENUMHELPER_1_T6CA08F864466AB0FE3C91BD7A9E544E9EDE03759_H
#define ENUMHELPER_1_T6CA08F864466AB0FE3C91BD7A9E544E9EDE03759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>
struct  EnumHelper_1_t6CA08F864466AB0FE3C91BD7A9E544E9EDE03759  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t6CA08F864466AB0FE3C91BD7A9E544E9EDE03759_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t6CA08F864466AB0FE3C91BD7A9E544E9EDE03759_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___IdentityInfo_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMHELPER_1_T6CA08F864466AB0FE3C91BD7A9E544E9EDE03759_H
#ifndef ENUMHELPER_1_TB3516ACE0911526FDCCECA27C61B425D83C7F471_H
#define ENUMHELPER_1_TB3516ACE0911526FDCCECA27C61B425D83C7F471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>
struct  EnumHelper_1_tB3516ACE0911526FDCCECA27C61B425D83C7F471  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_tB3516ACE0911526FDCCECA27C61B425D83C7F471_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_tB3516ACE0911526FDCCECA27C61B425D83C7F471_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___IdentityInfo_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMHELPER_1_TB3516ACE0911526FDCCECA27C61B425D83C7F471_H
#ifndef ENUMHELPER_1_T1606E7976B4575AE013F57502CAB2A7F55672EB5_H
#define ENUMHELPER_1_T1606E7976B4575AE013F57502CAB2A7F55672EB5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>
struct  EnumHelper_1_t1606E7976B4575AE013F57502CAB2A7F55672EB5  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t1606E7976B4575AE013F57502CAB2A7F55672EB5_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t1606E7976B4575AE013F57502CAB2A7F55672EB5_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___IdentityInfo_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMHELPER_1_T1606E7976B4575AE013F57502CAB2A7F55672EB5_H
#ifndef COLLECTIONEXTENSIONS_T04790A89E5724082B570A72C66DCBD3BA4458F41_H
#define COLLECTIONEXTENSIONS_T04790A89E5724082B570A72C66DCBD3BA4458F41_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Dynamic.Utils.CollectionExtensions
struct  CollectionExtensions_t04790A89E5724082B570A72C66DCBD3BA4458F41  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONEXTENSIONS_T04790A89E5724082B570A72C66DCBD3BA4458F41_H
#ifndef EMPTYARRAY_1_TA835F9169F98551C5189EB04F9D45B0E331E6B98_H
#define EMPTYARRAY_1_TA835F9169F98551C5189EB04F9D45B0E331E6B98_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EmptyArray`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>
struct  EmptyArray_1_tA835F9169F98551C5189EB04F9D45B0E331E6B98  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tA835F9169F98551C5189EB04F9D45B0E331E6B98_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	KeyValuePair_2U5BU5D_t920EB0A30DD5CE3BAAF02931D1ABDF93367AC84A* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tA835F9169F98551C5189EB04F9D45B0E331E6B98_StaticFields, ___Value_0)); }
	inline KeyValuePair_2U5BU5D_t920EB0A30DD5CE3BAAF02931D1ABDF93367AC84A* get_Value_0() const { return ___Value_0; }
	inline KeyValuePair_2U5BU5D_t920EB0A30DD5CE3BAAF02931D1ABDF93367AC84A** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(KeyValuePair_2U5BU5D_t920EB0A30DD5CE3BAAF02931D1ABDF93367AC84A* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMPTYARRAY_1_TA835F9169F98551C5189EB04F9D45B0E331E6B98_H
#ifndef EMPTYARRAY_1_T11B3969D38E2BF74B97BD01F02D6E2583FAA1D8F_H
#define EMPTYARRAY_1_T11B3969D38E2BF74B97BD01F02D6E2583FAA1D8F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EmptyArray`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  EmptyArray_1_t11B3969D38E2BF74B97BD01F02D6E2583FAA1D8F  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t11B3969D38E2BF74B97BD01F02D6E2583FAA1D8F_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	KeyValuePair_2U5BU5D_t4594E4068980FD80C0C538F4F8042A626BC1F262* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t11B3969D38E2BF74B97BD01F02D6E2583FAA1D8F_StaticFields, ___Value_0)); }
	inline KeyValuePair_2U5BU5D_t4594E4068980FD80C0C538F4F8042A626BC1F262* get_Value_0() const { return ___Value_0; }
	inline KeyValuePair_2U5BU5D_t4594E4068980FD80C0C538F4F8042A626BC1F262** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(KeyValuePair_2U5BU5D_t4594E4068980FD80C0C538F4F8042A626BC1F262* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMPTYARRAY_1_T11B3969D38E2BF74B97BD01F02D6E2583FAA1D8F_H
#ifndef EMPTYARRAY_1_T491E776E9DF407C043186AA08D7F688CC85E1C06_H
#define EMPTYARRAY_1_T491E776E9DF407C043186AA08D7F688CC85E1C06_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EmptyArray`1<System.Dynamic.BindingRestrictions_TestBuilder_AndNode>
struct  EmptyArray_1_t491E776E9DF407C043186AA08D7F688CC85E1C06  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t491E776E9DF407C043186AA08D7F688CC85E1C06_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	AndNodeU5BU5D_tCDAE7878A5056262CF069AB9A8C3720BED503611* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t491E776E9DF407C043186AA08D7F688CC85E1C06_StaticFields, ___Value_0)); }
	inline AndNodeU5BU5D_tCDAE7878A5056262CF069AB9A8C3720BED503611* get_Value_0() const { return ___Value_0; }
	inline AndNodeU5BU5D_tCDAE7878A5056262CF069AB9A8C3720BED503611** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(AndNodeU5BU5D_tCDAE7878A5056262CF069AB9A8C3720BED503611* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMPTYARRAY_1_T491E776E9DF407C043186AA08D7F688CC85E1C06_H
#ifndef EMPTYARRAY_1_T06931CAD9F4797C75EF9E653BBAEA917192828B7_H
#define EMPTYARRAY_1_T06931CAD9F4797C75EF9E653BBAEA917192828B7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EmptyArray`1<System.Linq.Expressions.Interpreter.LocalDefinition>
struct  EmptyArray_1_t06931CAD9F4797C75EF9E653BBAEA917192828B7  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t06931CAD9F4797C75EF9E653BBAEA917192828B7_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	LocalDefinitionU5BU5D_tE3170C0A3284313CAB9CA6A3B3F79027464F78F5* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t06931CAD9F4797C75EF9E653BBAEA917192828B7_StaticFields, ___Value_0)); }
	inline LocalDefinitionU5BU5D_tE3170C0A3284313CAB9CA6A3B3F79027464F78F5* get_Value_0() const { return ___Value_0; }
	inline LocalDefinitionU5BU5D_tE3170C0A3284313CAB9CA6A3B3F79027464F78F5** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(LocalDefinitionU5BU5D_tE3170C0A3284313CAB9CA6A3B3F79027464F78F5* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMPTYARRAY_1_T06931CAD9F4797C75EF9E653BBAEA917192828B7_H
#ifndef EMPTYARRAY_1_TCF137C88A5824F413EFB5A2F31664D8207E61D26_H
#define EMPTYARRAY_1_TCF137C88A5824F413EFB5A2F31664D8207E61D26_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMPTYARRAY_1_TCF137C88A5824F413EFB5A2F31664D8207E61D26_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef CUSTOMATTRIBUTEDATA_T2CD9D78F97B6517D5DEE35DEE97159B02C078F88_H
#define CUSTOMATTRIBUTEDATA_T2CD9D78F97B6517D5DEE35DEE97159B02C078F88_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeData
struct  CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::ctorInfo
	ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * ___ctorInfo_0;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::ctorArgs
	RuntimeObject* ___ctorArgs_1;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::namedArgs
	RuntimeObject* ___namedArgs_2;
	// System.Reflection.CustomAttributeData_LazyCAttrData System.Reflection.CustomAttributeData::lazyData
	LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38 * ___lazyData_3;

public:
	inline static int32_t get_offset_of_ctorInfo_0() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88, ___ctorInfo_0)); }
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * get_ctorInfo_0() const { return ___ctorInfo_0; }
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF ** get_address_of_ctorInfo_0() { return &___ctorInfo_0; }
	inline void set_ctorInfo_0(ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * value)
	{
		___ctorInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___ctorInfo_0), value);
	}

	inline static int32_t get_offset_of_ctorArgs_1() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88, ___ctorArgs_1)); }
	inline RuntimeObject* get_ctorArgs_1() const { return ___ctorArgs_1; }
	inline RuntimeObject** get_address_of_ctorArgs_1() { return &___ctorArgs_1; }
	inline void set_ctorArgs_1(RuntimeObject* value)
	{
		___ctorArgs_1 = value;
		Il2CppCodeGenWriteBarrier((&___ctorArgs_1), value);
	}

	inline static int32_t get_offset_of_namedArgs_2() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88, ___namedArgs_2)); }
	inline RuntimeObject* get_namedArgs_2() const { return ___namedArgs_2; }
	inline RuntimeObject** get_address_of_namedArgs_2() { return &___namedArgs_2; }
	inline void set_namedArgs_2(RuntimeObject* value)
	{
		___namedArgs_2 = value;
		Il2CppCodeGenWriteBarrier((&___namedArgs_2), value);
	}

	inline static int32_t get_offset_of_lazyData_3() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88, ___lazyData_3)); }
	inline LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38 * get_lazyData_3() const { return ___lazyData_3; }
	inline LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38 ** get_address_of_lazyData_3() { return &___lazyData_3; }
	inline void set_lazyData_3(LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38 * value)
	{
		___lazyData_3 = value;
		Il2CppCodeGenWriteBarrier((&___lazyData_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMATTRIBUTEDATA_T2CD9D78F97B6517D5DEE35DEE97159B02C078F88_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef CALLSITE_T8C37A443D7EE5B74293859D3ADC1EBA65BC16A4E_H
#define CALLSITE_T8C37A443D7EE5B74293859D3ADC1EBA65BC16A4E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CallSite
struct  CallSite_t8C37A443D7EE5B74293859D3ADC1EBA65BC16A4E  : public RuntimeObject
{
public:
	// System.Runtime.CompilerServices.CallSiteBinder System.Runtime.CompilerServices.CallSite::_binder
	CallSiteBinder_t76CF754DF48E3820B386E9C71F8DA13FCDD1C889 * ____binder_1;
	// System.Boolean System.Runtime.CompilerServices.CallSite::_match
	bool ____match_2;

public:
	inline static int32_t get_offset_of__binder_1() { return static_cast<int32_t>(offsetof(CallSite_t8C37A443D7EE5B74293859D3ADC1EBA65BC16A4E, ____binder_1)); }
	inline CallSiteBinder_t76CF754DF48E3820B386E9C71F8DA13FCDD1C889 * get__binder_1() const { return ____binder_1; }
	inline CallSiteBinder_t76CF754DF48E3820B386E9C71F8DA13FCDD1C889 ** get_address_of__binder_1() { return &____binder_1; }
	inline void set__binder_1(CallSiteBinder_t76CF754DF48E3820B386E9C71F8DA13FCDD1C889 * value)
	{
		____binder_1 = value;
		Il2CppCodeGenWriteBarrier((&____binder_1), value);
	}

	inline static int32_t get_offset_of__match_2() { return static_cast<int32_t>(offsetof(CallSite_t8C37A443D7EE5B74293859D3ADC1EBA65BC16A4E, ____match_2)); }
	inline bool get__match_2() const { return ____match_2; }
	inline bool* get_address_of__match_2() { return &____match_2; }
	inline void set__match_2(bool value)
	{
		____match_2 = value;
	}
};

struct CallSite_t8C37A443D7EE5B74293859D3ADC1EBA65BC16A4E_StaticFields
{
public:
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`2<System.Runtime.CompilerServices.CallSiteBinder,System.Runtime.CompilerServices.CallSite>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Runtime.CompilerServices.CallSite::s_siteCtors
	CacheDict_2_t53E47CA277D18C28DB76A96F131A833431A67EEE * ___s_siteCtors_0;

public:
	inline static int32_t get_offset_of_s_siteCtors_0() { return static_cast<int32_t>(offsetof(CallSite_t8C37A443D7EE5B74293859D3ADC1EBA65BC16A4E_StaticFields, ___s_siteCtors_0)); }
	inline CacheDict_2_t53E47CA277D18C28DB76A96F131A833431A67EEE * get_s_siteCtors_0() const { return ___s_siteCtors_0; }
	inline CacheDict_2_t53E47CA277D18C28DB76A96F131A833431A67EEE ** get_address_of_s_siteCtors_0() { return &___s_siteCtors_0; }
	inline void set_s_siteCtors_0(CacheDict_2_t53E47CA277D18C28DB76A96F131A833431A67EEE * value)
	{
		___s_siteCtors_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_siteCtors_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLSITE_T8C37A443D7EE5B74293859D3ADC1EBA65BC16A4E_H
#ifndef CALLSITEOPS_TD92C41D19E4798EFE9D07F0C3910A0914EB231B8_H
#define CALLSITEOPS_TD92C41D19E4798EFE9D07F0C3910A0914EB231B8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CallSiteOps
struct  CallSiteOps_tD92C41D19E4798EFE9D07F0C3910A0914EB231B8  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLSITEOPS_TD92C41D19E4798EFE9D07F0C3910A0914EB231B8_H
#ifndef RULECACHE_1_TDD048DE084B8B75C031EEFD4B27EE52502DB9F95_H
#define RULECACHE_1_TDD048DE084B8B75C031EEFD4B27EE52502DB9F95_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.RuleCache`1<System.Object>
struct  RuleCache_1_tDD048DE084B8B75C031EEFD4B27EE52502DB9F95  : public RuntimeObject
{
public:
	// T[] System.Runtime.CompilerServices.RuleCache`1::_rules
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____rules_0;
	// System.Object System.Runtime.CompilerServices.RuleCache`1::_cacheLock
	RuntimeObject * ____cacheLock_1;

public:
	inline static int32_t get_offset_of__rules_0() { return static_cast<int32_t>(offsetof(RuleCache_1_tDD048DE084B8B75C031EEFD4B27EE52502DB9F95, ____rules_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__rules_0() const { return ____rules_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__rules_0() { return &____rules_0; }
	inline void set__rules_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____rules_0 = value;
		Il2CppCodeGenWriteBarrier((&____rules_0), value);
	}

	inline static int32_t get_offset_of__cacheLock_1() { return static_cast<int32_t>(offsetof(RuleCache_1_tDD048DE084B8B75C031EEFD4B27EE52502DB9F95, ____cacheLock_1)); }
	inline RuntimeObject * get__cacheLock_1() const { return ____cacheLock_1; }
	inline RuntimeObject ** get_address_of__cacheLock_1() { return &____cacheLock_1; }
	inline void set__cacheLock_1(RuntimeObject * value)
	{
		____cacheLock_1 = value;
		Il2CppCodeGenWriteBarrier((&____cacheLock_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RULECACHE_1_TDD048DE084B8B75C031EEFD4B27EE52502DB9F95_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef ABSTRACTEVENTDATA_T636F385820C291DAE25897BCEB4FBCADDA3B75F6_H
#define ABSTRACTEVENTDATA_T636F385820C291DAE25897BCEB4FBCADDA3B75F6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T636F385820C291DAE25897BCEB4FBCADDA3B75F6_H
#ifndef EXECUTEEVENTS_T622B95FF46A568C8205B76C1D4111049FC265985_H
#define EXECUTEEVENTS_T622B95FF46A568C8205B76C1D4111049FC265985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.ExecuteEvents
struct  ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985  : public RuntimeObject
{
public:

public:
};

struct ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerEnterHandler
	EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * ___s_PointerEnterHandler_0;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerExitHandler
	EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * ___s_PointerExitHandler_1;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerDownHandler
	EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * ___s_PointerDownHandler_2;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerUpHandler
	EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * ___s_PointerUpHandler_3;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerClickHandler
	EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * ___s_PointerClickHandler_4;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_InitializePotentialDragHandler
	EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * ___s_InitializePotentialDragHandler_5;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_BeginDragHandler
	EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * ___s_BeginDragHandler_6;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_DragHandler
	EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * ___s_DragHandler_7;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_EndDragHandler
	EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * ___s_EndDragHandler_8;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::s_DropHandler
	EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * ___s_DropHandler_9;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::s_ScrollHandler
	EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * ___s_ScrollHandler_10;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::s_UpdateSelectedHandler
	EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * ___s_UpdateSelectedHandler_11;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.ISelectHandler> UnityEngine.EventSystems.ExecuteEvents::s_SelectHandler
	EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * ___s_SelectHandler_12;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> UnityEngine.EventSystems.ExecuteEvents::s_DeselectHandler
	EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * ___s_DeselectHandler_13;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::s_MoveHandler
	EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * ___s_MoveHandler_14;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::s_SubmitHandler
	EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * ___s_SubmitHandler_15;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::s_CancelHandler
	EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * ___s_CancelHandler_16;
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>> UnityEngine.EventSystems.ExecuteEvents::s_HandlerListPool
	ObjectPool_1_tA46EC5C3029914B5C6BC43C2337CBB8067BB19FC * ___s_HandlerListPool_17;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityEngine.EventSystems.ExecuteEvents::s_InternalTransformList
	List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * ___s_InternalTransformList_18;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cache0
	EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * ___U3CU3Ef__mgU24cache0_19;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cache1
	EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * ___U3CU3Ef__mgU24cache1_20;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cache2
	EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * ___U3CU3Ef__mgU24cache2_21;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cache3
	EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * ___U3CU3Ef__mgU24cache3_22;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cache4
	EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * ___U3CU3Ef__mgU24cache4_23;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cache5
	EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * ___U3CU3Ef__mgU24cache5_24;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cache6
	EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * ___U3CU3Ef__mgU24cache6_25;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cache7
	EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * ___U3CU3Ef__mgU24cache7_26;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cache8
	EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * ___U3CU3Ef__mgU24cache8_27;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cache9
	EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * ___U3CU3Ef__mgU24cache9_28;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cacheA
	EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * ___U3CU3Ef__mgU24cacheA_29;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cacheB
	EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * ___U3CU3Ef__mgU24cacheB_30;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.ISelectHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cacheC
	EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * ___U3CU3Ef__mgU24cacheC_31;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cacheD
	EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * ___U3CU3Ef__mgU24cacheD_32;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cacheE
	EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * ___U3CU3Ef__mgU24cacheE_33;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cacheF
	EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * ___U3CU3Ef__mgU24cacheF_34;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cache10
	EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * ___U3CU3Ef__mgU24cache10_35;

public:
	inline static int32_t get_offset_of_s_PointerEnterHandler_0() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerEnterHandler_0)); }
	inline EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * get_s_PointerEnterHandler_0() const { return ___s_PointerEnterHandler_0; }
	inline EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 ** get_address_of_s_PointerEnterHandler_0() { return &___s_PointerEnterHandler_0; }
	inline void set_s_PointerEnterHandler_0(EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * value)
	{
		___s_PointerEnterHandler_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerEnterHandler_0), value);
	}

	inline static int32_t get_offset_of_s_PointerExitHandler_1() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerExitHandler_1)); }
	inline EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * get_s_PointerExitHandler_1() const { return ___s_PointerExitHandler_1; }
	inline EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA ** get_address_of_s_PointerExitHandler_1() { return &___s_PointerExitHandler_1; }
	inline void set_s_PointerExitHandler_1(EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * value)
	{
		___s_PointerExitHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerExitHandler_1), value);
	}

	inline static int32_t get_offset_of_s_PointerDownHandler_2() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerDownHandler_2)); }
	inline EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * get_s_PointerDownHandler_2() const { return ___s_PointerDownHandler_2; }
	inline EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E ** get_address_of_s_PointerDownHandler_2() { return &___s_PointerDownHandler_2; }
	inline void set_s_PointerDownHandler_2(EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * value)
	{
		___s_PointerDownHandler_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerDownHandler_2), value);
	}

	inline static int32_t get_offset_of_s_PointerUpHandler_3() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerUpHandler_3)); }
	inline EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * get_s_PointerUpHandler_3() const { return ___s_PointerUpHandler_3; }
	inline EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 ** get_address_of_s_PointerUpHandler_3() { return &___s_PointerUpHandler_3; }
	inline void set_s_PointerUpHandler_3(EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * value)
	{
		___s_PointerUpHandler_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerUpHandler_3), value);
	}

	inline static int32_t get_offset_of_s_PointerClickHandler_4() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerClickHandler_4)); }
	inline EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * get_s_PointerClickHandler_4() const { return ___s_PointerClickHandler_4; }
	inline EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E ** get_address_of_s_PointerClickHandler_4() { return &___s_PointerClickHandler_4; }
	inline void set_s_PointerClickHandler_4(EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * value)
	{
		___s_PointerClickHandler_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerClickHandler_4), value);
	}

	inline static int32_t get_offset_of_s_InitializePotentialDragHandler_5() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_InitializePotentialDragHandler_5)); }
	inline EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * get_s_InitializePotentialDragHandler_5() const { return ___s_InitializePotentialDragHandler_5; }
	inline EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 ** get_address_of_s_InitializePotentialDragHandler_5() { return &___s_InitializePotentialDragHandler_5; }
	inline void set_s_InitializePotentialDragHandler_5(EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * value)
	{
		___s_InitializePotentialDragHandler_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_InitializePotentialDragHandler_5), value);
	}

	inline static int32_t get_offset_of_s_BeginDragHandler_6() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_BeginDragHandler_6)); }
	inline EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * get_s_BeginDragHandler_6() const { return ___s_BeginDragHandler_6; }
	inline EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 ** get_address_of_s_BeginDragHandler_6() { return &___s_BeginDragHandler_6; }
	inline void set_s_BeginDragHandler_6(EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * value)
	{
		___s_BeginDragHandler_6 = value;
		Il2CppCodeGenWriteBarrier((&___s_BeginDragHandler_6), value);
	}

	inline static int32_t get_offset_of_s_DragHandler_7() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DragHandler_7)); }
	inline EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * get_s_DragHandler_7() const { return ___s_DragHandler_7; }
	inline EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 ** get_address_of_s_DragHandler_7() { return &___s_DragHandler_7; }
	inline void set_s_DragHandler_7(EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * value)
	{
		___s_DragHandler_7 = value;
		Il2CppCodeGenWriteBarrier((&___s_DragHandler_7), value);
	}

	inline static int32_t get_offset_of_s_EndDragHandler_8() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_EndDragHandler_8)); }
	inline EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * get_s_EndDragHandler_8() const { return ___s_EndDragHandler_8; }
	inline EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 ** get_address_of_s_EndDragHandler_8() { return &___s_EndDragHandler_8; }
	inline void set_s_EndDragHandler_8(EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * value)
	{
		___s_EndDragHandler_8 = value;
		Il2CppCodeGenWriteBarrier((&___s_EndDragHandler_8), value);
	}

	inline static int32_t get_offset_of_s_DropHandler_9() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DropHandler_9)); }
	inline EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * get_s_DropHandler_9() const { return ___s_DropHandler_9; }
	inline EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 ** get_address_of_s_DropHandler_9() { return &___s_DropHandler_9; }
	inline void set_s_DropHandler_9(EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * value)
	{
		___s_DropHandler_9 = value;
		Il2CppCodeGenWriteBarrier((&___s_DropHandler_9), value);
	}

	inline static int32_t get_offset_of_s_ScrollHandler_10() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_ScrollHandler_10)); }
	inline EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * get_s_ScrollHandler_10() const { return ___s_ScrollHandler_10; }
	inline EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A ** get_address_of_s_ScrollHandler_10() { return &___s_ScrollHandler_10; }
	inline void set_s_ScrollHandler_10(EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * value)
	{
		___s_ScrollHandler_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_ScrollHandler_10), value);
	}

	inline static int32_t get_offset_of_s_UpdateSelectedHandler_11() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_UpdateSelectedHandler_11)); }
	inline EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * get_s_UpdateSelectedHandler_11() const { return ___s_UpdateSelectedHandler_11; }
	inline EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 ** get_address_of_s_UpdateSelectedHandler_11() { return &___s_UpdateSelectedHandler_11; }
	inline void set_s_UpdateSelectedHandler_11(EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * value)
	{
		___s_UpdateSelectedHandler_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_UpdateSelectedHandler_11), value);
	}

	inline static int32_t get_offset_of_s_SelectHandler_12() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_SelectHandler_12)); }
	inline EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * get_s_SelectHandler_12() const { return ___s_SelectHandler_12; }
	inline EventFunction_1_t7521247C87411935E8A2CA38683533083459473F ** get_address_of_s_SelectHandler_12() { return &___s_SelectHandler_12; }
	inline void set_s_SelectHandler_12(EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * value)
	{
		___s_SelectHandler_12 = value;
		Il2CppCodeGenWriteBarrier((&___s_SelectHandler_12), value);
	}

	inline static int32_t get_offset_of_s_DeselectHandler_13() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DeselectHandler_13)); }
	inline EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * get_s_DeselectHandler_13() const { return ___s_DeselectHandler_13; }
	inline EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 ** get_address_of_s_DeselectHandler_13() { return &___s_DeselectHandler_13; }
	inline void set_s_DeselectHandler_13(EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * value)
	{
		___s_DeselectHandler_13 = value;
		Il2CppCodeGenWriteBarrier((&___s_DeselectHandler_13), value);
	}

	inline static int32_t get_offset_of_s_MoveHandler_14() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_MoveHandler_14)); }
	inline EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * get_s_MoveHandler_14() const { return ___s_MoveHandler_14; }
	inline EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB ** get_address_of_s_MoveHandler_14() { return &___s_MoveHandler_14; }
	inline void set_s_MoveHandler_14(EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * value)
	{
		___s_MoveHandler_14 = value;
		Il2CppCodeGenWriteBarrier((&___s_MoveHandler_14), value);
	}

	inline static int32_t get_offset_of_s_SubmitHandler_15() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_SubmitHandler_15)); }
	inline EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * get_s_SubmitHandler_15() const { return ___s_SubmitHandler_15; }
	inline EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B ** get_address_of_s_SubmitHandler_15() { return &___s_SubmitHandler_15; }
	inline void set_s_SubmitHandler_15(EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * value)
	{
		___s_SubmitHandler_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_SubmitHandler_15), value);
	}

	inline static int32_t get_offset_of_s_CancelHandler_16() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_CancelHandler_16)); }
	inline EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * get_s_CancelHandler_16() const { return ___s_CancelHandler_16; }
	inline EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 ** get_address_of_s_CancelHandler_16() { return &___s_CancelHandler_16; }
	inline void set_s_CancelHandler_16(EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * value)
	{
		___s_CancelHandler_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_CancelHandler_16), value);
	}

	inline static int32_t get_offset_of_s_HandlerListPool_17() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_HandlerListPool_17)); }
	inline ObjectPool_1_tA46EC5C3029914B5C6BC43C2337CBB8067BB19FC * get_s_HandlerListPool_17() const { return ___s_HandlerListPool_17; }
	inline ObjectPool_1_tA46EC5C3029914B5C6BC43C2337CBB8067BB19FC ** get_address_of_s_HandlerListPool_17() { return &___s_HandlerListPool_17; }
	inline void set_s_HandlerListPool_17(ObjectPool_1_tA46EC5C3029914B5C6BC43C2337CBB8067BB19FC * value)
	{
		___s_HandlerListPool_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_HandlerListPool_17), value);
	}

	inline static int32_t get_offset_of_s_InternalTransformList_18() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_InternalTransformList_18)); }
	inline List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * get_s_InternalTransformList_18() const { return ___s_InternalTransformList_18; }
	inline List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D ** get_address_of_s_InternalTransformList_18() { return &___s_InternalTransformList_18; }
	inline void set_s_InternalTransformList_18(List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * value)
	{
		___s_InternalTransformList_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalTransformList_18), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_19() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cache0_19)); }
	inline EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * get_U3CU3Ef__mgU24cache0_19() const { return ___U3CU3Ef__mgU24cache0_19; }
	inline EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 ** get_address_of_U3CU3Ef__mgU24cache0_19() { return &___U3CU3Ef__mgU24cache0_19; }
	inline void set_U3CU3Ef__mgU24cache0_19(EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * value)
	{
		___U3CU3Ef__mgU24cache0_19 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_19), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_20() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cache1_20)); }
	inline EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * get_U3CU3Ef__mgU24cache1_20() const { return ___U3CU3Ef__mgU24cache1_20; }
	inline EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA ** get_address_of_U3CU3Ef__mgU24cache1_20() { return &___U3CU3Ef__mgU24cache1_20; }
	inline void set_U3CU3Ef__mgU24cache1_20(EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * value)
	{
		___U3CU3Ef__mgU24cache1_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_20), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_21() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cache2_21)); }
	inline EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * get_U3CU3Ef__mgU24cache2_21() const { return ___U3CU3Ef__mgU24cache2_21; }
	inline EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E ** get_address_of_U3CU3Ef__mgU24cache2_21() { return &___U3CU3Ef__mgU24cache2_21; }
	inline void set_U3CU3Ef__mgU24cache2_21(EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * value)
	{
		___U3CU3Ef__mgU24cache2_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_21), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_22() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cache3_22)); }
	inline EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * get_U3CU3Ef__mgU24cache3_22() const { return ___U3CU3Ef__mgU24cache3_22; }
	inline EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 ** get_address_of_U3CU3Ef__mgU24cache3_22() { return &___U3CU3Ef__mgU24cache3_22; }
	inline void set_U3CU3Ef__mgU24cache3_22(EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * value)
	{
		___U3CU3Ef__mgU24cache3_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_23() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cache4_23)); }
	inline EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * get_U3CU3Ef__mgU24cache4_23() const { return ___U3CU3Ef__mgU24cache4_23; }
	inline EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E ** get_address_of_U3CU3Ef__mgU24cache4_23() { return &___U3CU3Ef__mgU24cache4_23; }
	inline void set_U3CU3Ef__mgU24cache4_23(EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * value)
	{
		___U3CU3Ef__mgU24cache4_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_24() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cache5_24)); }
	inline EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * get_U3CU3Ef__mgU24cache5_24() const { return ___U3CU3Ef__mgU24cache5_24; }
	inline EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 ** get_address_of_U3CU3Ef__mgU24cache5_24() { return &___U3CU3Ef__mgU24cache5_24; }
	inline void set_U3CU3Ef__mgU24cache5_24(EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * value)
	{
		___U3CU3Ef__mgU24cache5_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5_24), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_25() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cache6_25)); }
	inline EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * get_U3CU3Ef__mgU24cache6_25() const { return ___U3CU3Ef__mgU24cache6_25; }
	inline EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 ** get_address_of_U3CU3Ef__mgU24cache6_25() { return &___U3CU3Ef__mgU24cache6_25; }
	inline void set_U3CU3Ef__mgU24cache6_25(EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * value)
	{
		___U3CU3Ef__mgU24cache6_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache6_25), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_26() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cache7_26)); }
	inline EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * get_U3CU3Ef__mgU24cache7_26() const { return ___U3CU3Ef__mgU24cache7_26; }
	inline EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 ** get_address_of_U3CU3Ef__mgU24cache7_26() { return &___U3CU3Ef__mgU24cache7_26; }
	inline void set_U3CU3Ef__mgU24cache7_26(EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * value)
	{
		___U3CU3Ef__mgU24cache7_26 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache7_26), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_27() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cache8_27)); }
	inline EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * get_U3CU3Ef__mgU24cache8_27() const { return ___U3CU3Ef__mgU24cache8_27; }
	inline EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 ** get_address_of_U3CU3Ef__mgU24cache8_27() { return &___U3CU3Ef__mgU24cache8_27; }
	inline void set_U3CU3Ef__mgU24cache8_27(EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * value)
	{
		___U3CU3Ef__mgU24cache8_27 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache8_27), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9_28() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cache9_28)); }
	inline EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * get_U3CU3Ef__mgU24cache9_28() const { return ___U3CU3Ef__mgU24cache9_28; }
	inline EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 ** get_address_of_U3CU3Ef__mgU24cache9_28() { return &___U3CU3Ef__mgU24cache9_28; }
	inline void set_U3CU3Ef__mgU24cache9_28(EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * value)
	{
		___U3CU3Ef__mgU24cache9_28 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache9_28), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA_29() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cacheA_29)); }
	inline EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * get_U3CU3Ef__mgU24cacheA_29() const { return ___U3CU3Ef__mgU24cacheA_29; }
	inline EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A ** get_address_of_U3CU3Ef__mgU24cacheA_29() { return &___U3CU3Ef__mgU24cacheA_29; }
	inline void set_U3CU3Ef__mgU24cacheA_29(EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * value)
	{
		___U3CU3Ef__mgU24cacheA_29 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheA_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB_30() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cacheB_30)); }
	inline EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * get_U3CU3Ef__mgU24cacheB_30() const { return ___U3CU3Ef__mgU24cacheB_30; }
	inline EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 ** get_address_of_U3CU3Ef__mgU24cacheB_30() { return &___U3CU3Ef__mgU24cacheB_30; }
	inline void set_U3CU3Ef__mgU24cacheB_30(EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * value)
	{
		___U3CU3Ef__mgU24cacheB_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheB_30), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheC_31() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cacheC_31)); }
	inline EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * get_U3CU3Ef__mgU24cacheC_31() const { return ___U3CU3Ef__mgU24cacheC_31; }
	inline EventFunction_1_t7521247C87411935E8A2CA38683533083459473F ** get_address_of_U3CU3Ef__mgU24cacheC_31() { return &___U3CU3Ef__mgU24cacheC_31; }
	inline void set_U3CU3Ef__mgU24cacheC_31(EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * value)
	{
		___U3CU3Ef__mgU24cacheC_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheC_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheD_32() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cacheD_32)); }
	inline EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * get_U3CU3Ef__mgU24cacheD_32() const { return ___U3CU3Ef__mgU24cacheD_32; }
	inline EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 ** get_address_of_U3CU3Ef__mgU24cacheD_32() { return &___U3CU3Ef__mgU24cacheD_32; }
	inline void set_U3CU3Ef__mgU24cacheD_32(EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * value)
	{
		___U3CU3Ef__mgU24cacheD_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheD_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheE_33() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cacheE_33)); }
	inline EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * get_U3CU3Ef__mgU24cacheE_33() const { return ___U3CU3Ef__mgU24cacheE_33; }
	inline EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB ** get_address_of_U3CU3Ef__mgU24cacheE_33() { return &___U3CU3Ef__mgU24cacheE_33; }
	inline void set_U3CU3Ef__mgU24cacheE_33(EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * value)
	{
		___U3CU3Ef__mgU24cacheE_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheE_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheF_34() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cacheF_34)); }
	inline EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * get_U3CU3Ef__mgU24cacheF_34() const { return ___U3CU3Ef__mgU24cacheF_34; }
	inline EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B ** get_address_of_U3CU3Ef__mgU24cacheF_34() { return &___U3CU3Ef__mgU24cacheF_34; }
	inline void set_U3CU3Ef__mgU24cacheF_34(EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * value)
	{
		___U3CU3Ef__mgU24cacheF_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheF_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache10_35() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cache10_35)); }
	inline EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * get_U3CU3Ef__mgU24cache10_35() const { return ___U3CU3Ef__mgU24cache10_35; }
	inline EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 ** get_address_of_U3CU3Ef__mgU24cache10_35() { return &___U3CU3Ef__mgU24cache10_35; }
	inline void set_U3CU3Ef__mgU24cache10_35(EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * value)
	{
		___U3CU3Ef__mgU24cache10_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache10_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTEEVENTS_T622B95FF46A568C8205B76C1D4111049FC265985_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#define BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#ifndef CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#define CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#ifndef ARRAYBUILDER_1_T1E6F2012183FAF071D71CDE9A25424FC01D95CEF_H
#define ARRAYBUILDER_1_T1E6F2012183FAF071D71CDE9A25424FC01D95CEF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.ArrayBuilder`1<System.Object[]>
struct  ArrayBuilder_1_t1E6F2012183FAF071D71CDE9A25424FC01D95CEF 
{
public:
	// T[] System.Collections.Generic.ArrayBuilder`1::_array
	ObjectU5BU5DU5BU5D_t990A2F73EF96ED2F281C02027E303D465098835F* ____array_0;
	// System.Int32 System.Collections.Generic.ArrayBuilder`1::_count
	int32_t ____count_1;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArrayBuilder_1_t1E6F2012183FAF071D71CDE9A25424FC01D95CEF, ____array_0)); }
	inline ObjectU5BU5DU5BU5D_t990A2F73EF96ED2F281C02027E303D465098835F* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5DU5BU5D_t990A2F73EF96ED2F281C02027E303D465098835F** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5DU5BU5D_t990A2F73EF96ED2F281C02027E303D465098835F* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__count_1() { return static_cast<int32_t>(offsetof(ArrayBuilder_1_t1E6F2012183FAF071D71CDE9A25424FC01D95CEF, ____count_1)); }
	inline int32_t get__count_1() const { return ____count_1; }
	inline int32_t* get_address_of__count_1() { return &____count_1; }
	inline void set__count_1(int32_t value)
	{
		____count_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYBUILDER_1_T1E6F2012183FAF071D71CDE9A25424FC01D95CEF_H
#ifndef KEYVALUEPAIR_2_T23481547E419E16E3B96A303578C1EB685C99EEE_H
#define KEYVALUEPAIR_2_T23481547E419E16E3B96A303578C1EB685C99EEE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T23481547E419E16E3B96A303578C1EB685C99EEE_H
#ifndef DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#define DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifndef DECIMAL_T44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_H
#define DECIMAL_T44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((&___Powers10_6), value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Zero_7)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___One_8)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_One_8() const { return ___One_8; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinusOne_9)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MaxValue_10)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinValue_11)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearPositiveZero_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_H
#ifndef EMPTYSTRUCT_TA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_H
#define EMPTYSTRUCT_TA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EmptyStruct
struct  EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 
{
public:
	union
	{
		struct
		{
		};
		uint8_t EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMPTYSTRUCT_TA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_H
#ifndef DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#define DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifndef ANDNODE_TCC48979AF5896DA4A881EE49E182099994188916_H
#define ANDNODE_TCC48979AF5896DA4A881EE49E182099994188916_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Dynamic.BindingRestrictions_TestBuilder_AndNode
struct  AndNode_tCC48979AF5896DA4A881EE49E182099994188916 
{
public:
	// System.Int32 System.Dynamic.BindingRestrictions_TestBuilder_AndNode::Depth
	int32_t ___Depth_0;
	// System.Linq.Expressions.Expression System.Dynamic.BindingRestrictions_TestBuilder_AndNode::Node
	Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F * ___Node_1;

public:
	inline static int32_t get_offset_of_Depth_0() { return static_cast<int32_t>(offsetof(AndNode_tCC48979AF5896DA4A881EE49E182099994188916, ___Depth_0)); }
	inline int32_t get_Depth_0() const { return ___Depth_0; }
	inline int32_t* get_address_of_Depth_0() { return &___Depth_0; }
	inline void set_Depth_0(int32_t value)
	{
		___Depth_0 = value;
	}

	inline static int32_t get_offset_of_Node_1() { return static_cast<int32_t>(offsetof(AndNode_tCC48979AF5896DA4A881EE49E182099994188916, ___Node_1)); }
	inline Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F * get_Node_1() const { return ___Node_1; }
	inline Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F ** get_address_of_Node_1() { return &___Node_1; }
	inline void set_Node_1(Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F * value)
	{
		___Node_1 = value;
		Il2CppCodeGenWriteBarrier((&___Node_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Dynamic.BindingRestrictions/TestBuilder/AndNode
struct AndNode_tCC48979AF5896DA4A881EE49E182099994188916_marshaled_pinvoke
{
	int32_t ___Depth_0;
	Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F * ___Node_1;
};
// Native definition for COM marshalling of System.Dynamic.BindingRestrictions/TestBuilder/AndNode
struct AndNode_tCC48979AF5896DA4A881EE49E182099994188916_marshaled_com
{
	int32_t ___Depth_0;
	Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F * ___Node_1;
};
#endif // ANDNODE_TCC48979AF5896DA4A881EE49E182099994188916_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef INT16_T823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_H
#define INT16_T823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#define INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef LOCALDEFINITION_T6EB6DABA8D559626495A9D03AFEE82848A905C2D_H
#define LOCALDEFINITION_T6EB6DABA8D559626495A9D03AFEE82848A905C2D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Interpreter.LocalDefinition
struct  LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D 
{
public:
	// System.Int32 System.Linq.Expressions.Interpreter.LocalDefinition::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.Linq.Expressions.ParameterExpression System.Linq.Expressions.Interpreter.LocalDefinition::<Parameter>k__BackingField
	ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * ___U3CParameterU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CIndexU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D, ___U3CIndexU3Ek__BackingField_0)); }
	inline int32_t get_U3CIndexU3Ek__BackingField_0() const { return ___U3CIndexU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIndexU3Ek__BackingField_0() { return &___U3CIndexU3Ek__BackingField_0; }
	inline void set_U3CIndexU3Ek__BackingField_0(int32_t value)
	{
		___U3CIndexU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CParameterU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D, ___U3CParameterU3Ek__BackingField_1)); }
	inline ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * get_U3CParameterU3Ek__BackingField_1() const { return ___U3CParameterU3Ek__BackingField_1; }
	inline ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 ** get_address_of_U3CParameterU3Ek__BackingField_1() { return &___U3CParameterU3Ek__BackingField_1; }
	inline void set_U3CParameterU3Ek__BackingField_1(ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * value)
	{
		___U3CParameterU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CParameterU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Linq.Expressions.Interpreter.LocalDefinition
struct LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D_marshaled_pinvoke
{
	int32_t ___U3CIndexU3Ek__BackingField_0;
	ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * ___U3CParameterU3Ek__BackingField_1;
};
// Native definition for COM marshalling of System.Linq.Expressions.Interpreter.LocalDefinition
struct LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D_marshaled_com
{
	int32_t ___U3CIndexU3Ek__BackingField_0;
	ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * ___U3CParameterU3Ek__BackingField_1;
};
#endif // LOCALDEFINITION_T6EB6DABA8D559626495A9D03AFEE82848A905C2D_H
#ifndef CUSTOMATTRIBUTETYPEDARGUMENT_T238ACCB3A438CB5EDE4A924C637B288CCEC958E8_H
#define CUSTOMATTRIBUTETYPEDARGUMENT_T238ACCB3A438CB5EDE4A924C637B288CCEC958E8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeTypedArgument
struct  CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 
{
public:
	// System.Type System.Reflection.CustomAttributeTypedArgument::argumentType
	Type_t * ___argumentType_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_argumentType_0() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8, ___argumentType_0)); }
	inline Type_t * get_argumentType_0() const { return ___argumentType_0; }
	inline Type_t ** get_address_of_argumentType_0() { return &___argumentType_0; }
	inline void set_argumentType_0(Type_t * value)
	{
		___argumentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___argumentType_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_pinvoke
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_com
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
#endif // CUSTOMATTRIBUTETYPEDARGUMENT_T238ACCB3A438CB5EDE4A924C637B288CCEC958E8_H
#ifndef CALLSITE_1_T6B791A796E7920F964397D6D4A417E14EF67541D_H
#define CALLSITE_1_T6B791A796E7920F964397D6D4A417E14EF67541D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CallSite`1<System.Object>
struct  CallSite_1_t6B791A796E7920F964397D6D4A417E14EF67541D  : public CallSite_t8C37A443D7EE5B74293859D3ADC1EBA65BC16A4E
{
public:
	// T System.Runtime.CompilerServices.CallSite`1::Target
	RuntimeObject * ___Target_3;
	// T[] System.Runtime.CompilerServices.CallSite`1::Rules
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___Rules_4;

public:
	inline static int32_t get_offset_of_Target_3() { return static_cast<int32_t>(offsetof(CallSite_1_t6B791A796E7920F964397D6D4A417E14EF67541D, ___Target_3)); }
	inline RuntimeObject * get_Target_3() const { return ___Target_3; }
	inline RuntimeObject ** get_address_of_Target_3() { return &___Target_3; }
	inline void set_Target_3(RuntimeObject * value)
	{
		___Target_3 = value;
		Il2CppCodeGenWriteBarrier((&___Target_3), value);
	}

	inline static int32_t get_offset_of_Rules_4() { return static_cast<int32_t>(offsetof(CallSite_1_t6B791A796E7920F964397D6D4A417E14EF67541D, ___Rules_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_Rules_4() const { return ___Rules_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_Rules_4() { return &___Rules_4; }
	inline void set_Rules_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___Rules_4 = value;
		Il2CppCodeGenWriteBarrier((&___Rules_4), value);
	}
};

struct CallSite_1_t6B791A796E7920F964397D6D4A417E14EF67541D_StaticFields
{
public:
	// T System.Runtime.CompilerServices.CallSite`1::s_cachedUpdate
	RuntimeObject * ___s_cachedUpdate_5;
	// T modreq(System.Runtime.CompilerServices.IsVolatile) System.Runtime.CompilerServices.CallSite`1::s_cachedNoMatch
	RuntimeObject * ___s_cachedNoMatch_6;

public:
	inline static int32_t get_offset_of_s_cachedUpdate_5() { return static_cast<int32_t>(offsetof(CallSite_1_t6B791A796E7920F964397D6D4A417E14EF67541D_StaticFields, ___s_cachedUpdate_5)); }
	inline RuntimeObject * get_s_cachedUpdate_5() const { return ___s_cachedUpdate_5; }
	inline RuntimeObject ** get_address_of_s_cachedUpdate_5() { return &___s_cachedUpdate_5; }
	inline void set_s_cachedUpdate_5(RuntimeObject * value)
	{
		___s_cachedUpdate_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_cachedUpdate_5), value);
	}

	inline static int32_t get_offset_of_s_cachedNoMatch_6() { return static_cast<int32_t>(offsetof(CallSite_1_t6B791A796E7920F964397D6D4A417E14EF67541D_StaticFields, ___s_cachedNoMatch_6)); }
	inline RuntimeObject * get_s_cachedNoMatch_6() const { return ___s_cachedNoMatch_6; }
	inline RuntimeObject ** get_address_of_s_cachedNoMatch_6() { return &___s_cachedNoMatch_6; }
	inline void set_s_cachedNoMatch_6(RuntimeObject * value)
	{
		___s_cachedNoMatch_6 = value;
		Il2CppCodeGenWriteBarrier((&___s_cachedNoMatch_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLSITE_1_T6B791A796E7920F964397D6D4A417E14EF67541D_H
#ifndef SBYTE_T9070AEA2966184235653CB9B4D33B149CDA831DF_H
#define SBYTE_T9070AEA2966184235653CB9B4D33B149CDA831DF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T9070AEA2966184235653CB9B4D33B149CDA831DF_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef UINT16_TAE45CEF73BF720100519F6867F32145D075F928E_H
#define UINT16_TAE45CEF73BF720100519F6867F32145D075F928E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_TAE45CEF73BF720100519F6867F32145D075F928E_H
#ifndef UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#define UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifndef UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#define UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef COLOR32_T23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_H
#define COLOR32_T23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct  Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_H
#ifndef BASEEVENTDATA_T46C9D2AE3183A742EDE89944AF64A23DBF1B80A5_H
#define BASEEVENTDATA_T46C9D2AE3183A742EDE89944AF64A23DBF1B80A5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T46C9D2AE3183A742EDE89944AF64A23DBF1B80A5_H
#ifndef VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#define VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#define VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#ifndef ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#define ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifndef KEYVALUEPAIR_2_TD85A2E33C726647EDFB2F7F8E7EDC766E3C53B78_H
#define KEYVALUEPAIR_2_TD85A2E33C726647EDFB2F7F8E7EDC766E3C53B78_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>
struct  KeyValuePair_2_tD85A2E33C726647EDFB2F7F8E7EDC766E3C53B78 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD85A2E33C726647EDFB2F7F8E7EDC766E3C53B78, ___key_0)); }
	inline Guid_t  get_key_0() const { return ___key_0; }
	inline Guid_t * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Guid_t  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD85A2E33C726647EDFB2F7F8E7EDC766E3C53B78, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_TD85A2E33C726647EDFB2F7F8E7EDC766E3C53B78_H
#ifndef LARGEARRAYBUILDER_1_TC9659C9765BA8524EF7A1E6C55A7571A490F519B_H
#define LARGEARRAYBUILDER_1_TC9659C9765BA8524EF7A1E6C55A7571A490F519B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.LargeArrayBuilder`1<System.Object>
struct  LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B 
{
public:
	// System.Int32 System.Collections.Generic.LargeArrayBuilder`1::_maxCapacity
	int32_t ____maxCapacity_0;
	// T[] System.Collections.Generic.LargeArrayBuilder`1::_first
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____first_1;
	// System.Collections.Generic.ArrayBuilder`1<T[]> System.Collections.Generic.LargeArrayBuilder`1::_buffers
	ArrayBuilder_1_t1E6F2012183FAF071D71CDE9A25424FC01D95CEF  ____buffers_2;
	// T[] System.Collections.Generic.LargeArrayBuilder`1::_current
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____current_3;
	// System.Int32 System.Collections.Generic.LargeArrayBuilder`1::_index
	int32_t ____index_4;
	// System.Int32 System.Collections.Generic.LargeArrayBuilder`1::_count
	int32_t ____count_5;

public:
	inline static int32_t get_offset_of__maxCapacity_0() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B, ____maxCapacity_0)); }
	inline int32_t get__maxCapacity_0() const { return ____maxCapacity_0; }
	inline int32_t* get_address_of__maxCapacity_0() { return &____maxCapacity_0; }
	inline void set__maxCapacity_0(int32_t value)
	{
		____maxCapacity_0 = value;
	}

	inline static int32_t get_offset_of__first_1() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B, ____first_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__first_1() const { return ____first_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__first_1() { return &____first_1; }
	inline void set__first_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____first_1 = value;
		Il2CppCodeGenWriteBarrier((&____first_1), value);
	}

	inline static int32_t get_offset_of__buffers_2() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B, ____buffers_2)); }
	inline ArrayBuilder_1_t1E6F2012183FAF071D71CDE9A25424FC01D95CEF  get__buffers_2() const { return ____buffers_2; }
	inline ArrayBuilder_1_t1E6F2012183FAF071D71CDE9A25424FC01D95CEF * get_address_of__buffers_2() { return &____buffers_2; }
	inline void set__buffers_2(ArrayBuilder_1_t1E6F2012183FAF071D71CDE9A25424FC01D95CEF  value)
	{
		____buffers_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B, ____current_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__current_3() const { return ____current_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((&____current_3), value);
	}

	inline static int32_t get_offset_of__index_4() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B, ____index_4)); }
	inline int32_t get__index_4() const { return ____index_4; }
	inline int32_t* get_address_of__index_4() { return &____index_4; }
	inline void set__index_4(int32_t value)
	{
		____index_4 = value;
	}

	inline static int32_t get_offset_of__count_5() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B, ____count_5)); }
	inline int32_t get__count_5() const { return ____count_5; }
	inline int32_t* get_address_of__count_5() { return &____count_5; }
	inline void set__count_5(int32_t value)
	{
		____count_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LARGEARRAYBUILDER_1_TC9659C9765BA8524EF7A1E6C55A7571A490F519B_H
#ifndef DATETIMEOFFSET_T6C333873402CAD576160B4F8E159EB6834F06B85_H
#define DATETIMEOFFSET_T6C333873402CAD576160B4F8E159EB6834F06B85_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeOffset
struct  DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85, ___m_dateTime_2)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  value)
	{
		___MaxValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEOFFSET_T6C333873402CAD576160B4F8E159EB6834F06B85_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#define BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifndef CUSTOMATTRIBUTENAMEDARGUMENT_T08BA731A94FD7F173551DF3098384CB9B3056E9E_H
#define CUSTOMATTRIBUTENAMEDARGUMENT_T08BA731A94FD7F173551DF3098384CB9B3056E9E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeNamedArgument
struct  CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  value)
	{
		___typedArgument_0 = value;
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E, ___memberInfo_1)); }
	inline MemberInfo_t * get_memberInfo_1() const { return ___memberInfo_1; }
	inline MemberInfo_t ** get_address_of_memberInfo_1() { return &___memberInfo_1; }
	inline void set_memberInfo_1(MemberInfo_t * value)
	{
		___memberInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___memberInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshaled_pinvoke
{
	CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshaled_com
{
	CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
#endif // CUSTOMATTRIBUTENAMEDARGUMENT_T08BA731A94FD7F173551DF3098384CB9B3056E9E_H
#ifndef RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#define RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifndef TIMESPAN_TA8069278ACE8A74D6DF7D514A9CD4432433F64C4_H
#define TIMESPAN_TA8069278ACE8A74D6DF7D514A9CD4432433F64C4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_0)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_2)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_TA8069278ACE8A74D6DF7D514A9CD4432433F64C4_H
#ifndef INTERNALVERTEXCHANNELTYPE_T6E7BF24C2E6B97B01F96625DBAF6A2CF402CFF9D_H
#define INTERNALVERTEXCHANNELTYPE_T6E7BF24C2E6B97B01F96625DBAF6A2CF402CFF9D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh_InternalVertexChannelType
struct  InternalVertexChannelType_t6E7BF24C2E6B97B01F96625DBAF6A2CF402CFF9D 
{
public:
	// System.Int32 UnityEngine.Mesh_InternalVertexChannelType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InternalVertexChannelType_t6E7BF24C2E6B97B01F96625DBAF6A2CF402CFF9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALVERTEXCHANNELTYPE_T6E7BF24C2E6B97B01F96625DBAF6A2CF402CFF9D_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef VERTEXATTRIBUTE_T2D79DF64001C55DA72AC86CE8946098970E8194D_H
#define VERTEXATTRIBUTE_T2D79DF64001C55DA72AC86CE8946098970E8194D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.VertexAttribute
struct  VertexAttribute_t2D79DF64001C55DA72AC86CE8946098970E8194D 
{
public:
	// System.Int32 UnityEngine.Rendering.VertexAttribute::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexAttribute_t2D79DF64001C55DA72AC86CE8946098970E8194D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERTEXATTRIBUTE_T2D79DF64001C55DA72AC86CE8946098970E8194D_H
#ifndef ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#define ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#define GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifndef MESH_T6106B8D8E4C691321581AB0445552EC78B947B8C_H
#define MESH_T6106B8D8E4C691321581AB0445552EC78B947B8C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T6106B8D8E4C691321581AB0445552EC78B947B8C_H
#ifndef TRANSFORMER_1_T19A7258583FA1642B75695805A3C675EA09C25E5_H
#define TRANSFORMER_1_T19A7258583FA1642B75695805A3C675EA09C25E5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Boolean>
struct  Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T19A7258583FA1642B75695805A3C675EA09C25E5_H
#ifndef TRANSFORMER_1_TEF5D2D9847B566056189D34781B028AAC143AE94_H
#define TRANSFORMER_1_TEF5D2D9847B566056189D34781B028AAC143AE94_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Byte>
struct  Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TEF5D2D9847B566056189D34781B028AAC143AE94_H
#ifndef TRANSFORMER_1_T324CE6226D2DB02125521E43B7578823697F11C9_H
#define TRANSFORMER_1_T324CE6226D2DB02125521E43B7578823697F11C9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Char>
struct  Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T324CE6226D2DB02125521E43B7578823697F11C9_H
#ifndef TRANSFORMER_1_T986FAAB941679A366CE204DA40A2C414683DDE0A_H
#define TRANSFORMER_1_T986FAAB941679A366CE204DA40A2C414683DDE0A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T986FAAB941679A366CE204DA40A2C414683DDE0A_H
#ifndef TRANSFORMER_1_TDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02_H
#define TRANSFORMER_1_TDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.DateTime>
struct  Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02_H
#ifndef TRANSFORMER_1_TBE57A838EA9C265FA94567A0081AA9D93DDC74F8_H
#define TRANSFORMER_1_TBE57A838EA9C265FA94567A0081AA9D93DDC74F8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.DateTimeOffset>
struct  Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TBE57A838EA9C265FA94567A0081AA9D93DDC74F8_H
#ifndef TRANSFORMER_1_TA51CB05B3742EC3F46FA501481261EDEB730DABD_H
#define TRANSFORMER_1_TA51CB05B3742EC3F46FA501481261EDEB730DABD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Decimal>
struct  Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TA51CB05B3742EC3F46FA501481261EDEB730DABD_H
#ifndef TRANSFORMER_1_T4BE562A96C7C1F79332E47AAC9A46C3302AB47A2_H
#define TRANSFORMER_1_T4BE562A96C7C1F79332E47AAC9A46C3302AB47A2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T4BE562A96C7C1F79332E47AAC9A46C3302AB47A2_H
#ifndef TRANSFORMER_1_T3D2772F81DACC0E761A22F7C74C18AD24C36D58D_H
#define TRANSFORMER_1_T3D2772F81DACC0E761A22F7C74C18AD24C36D58D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Double>
struct  Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T3D2772F81DACC0E761A22F7C74C18AD24C36D58D_H
#ifndef TRANSFORMER_1_T8542C56C05EB3E22016B2903F0EDCAC5D051355B_H
#define TRANSFORMER_1_T8542C56C05EB3E22016B2903F0EDCAC5D051355B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Guid>
struct  Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T8542C56C05EB3E22016B2903F0EDCAC5D051355B_H
#ifndef TRANSFORMER_1_T436942B036692C49C596B552368FD0D9AEB19996_H
#define TRANSFORMER_1_T436942B036692C49C596B552368FD0D9AEB19996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Int16>
struct  Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T436942B036692C49C596B552368FD0D9AEB19996_H
#ifndef TRANSFORMER_1_TD02BD295F6960A844F4E3D7D4CA9F0FBD4007780_H
#define TRANSFORMER_1_TD02BD295F6960A844F4E3D7D4CA9F0FBD4007780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Int32>
struct  Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TD02BD295F6960A844F4E3D7D4CA9F0FBD4007780_H
#ifndef TRANSFORMER_1_T4FF63122CA8338DDEE466FBA386674D90B0DA997_H
#define TRANSFORMER_1_T4FF63122CA8338DDEE466FBA386674D90B0DA997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Int64>
struct  Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T4FF63122CA8338DDEE466FBA386674D90B0DA997_H
#ifndef TRANSFORMER_1_TD37A651949FE156BFC86946E76F3BEA93F428054_H
#define TRANSFORMER_1_TD37A651949FE156BFC86946E76F3BEA93F428054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.IntPtr>
struct  Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TD37A651949FE156BFC86946E76F3BEA93F428054_H
#ifndef TRANSFORMER_1_TD19681DA49D4AA38D8D48CE42752CBE15718DB47_H
#define TRANSFORMER_1_TD19681DA49D4AA38D8D48CE42752CBE15718DB47_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Object>
struct  Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TD19681DA49D4AA38D8D48CE42752CBE15718DB47_H
#ifndef TRANSFORMER_1_T664F7EECE18DF51BE5DD248D5B93731F8A23DCD4_H
#define TRANSFORMER_1_T664F7EECE18DF51BE5DD248D5B93731F8A23DCD4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.SByte>
struct  Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T664F7EECE18DF51BE5DD248D5B93731F8A23DCD4_H
#ifndef TRANSFORMER_1_TB28894046684B559EDC3DE1E3481E408A5BE3A89_H
#define TRANSFORMER_1_TB28894046684B559EDC3DE1E3481E408A5BE3A89_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Single>
struct  Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TB28894046684B559EDC3DE1E3481E408A5BE3A89_H
#ifndef TRANSFORMER_1_T1AB12F230CAB2407D401317A65F9A5463404A073_H
#define TRANSFORMER_1_T1AB12F230CAB2407D401317A65F9A5463404A073_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.TimeSpan>
struct  Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T1AB12F230CAB2407D401317A65F9A5463404A073_H
#ifndef TRANSFORMER_1_T9AB703D7D55E206EFFA2B0270C980C290C374E32_H
#define TRANSFORMER_1_T9AB703D7D55E206EFFA2B0270C980C290C374E32_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.UInt16>
struct  Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T9AB703D7D55E206EFFA2B0270C980C290C374E32_H
#ifndef TRANSFORMER_1_T4FD7FB274F8A13E577B2C68C562542FB8BE19BF5_H
#define TRANSFORMER_1_T4FD7FB274F8A13E577B2C68C562542FB8BE19BF5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.UInt32>
struct  Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T4FD7FB274F8A13E577B2C68C562542FB8BE19BF5_H
#ifndef TRANSFORMER_1_TF779A9DA86F954469CABF99E43E5D2126D6C7558_H
#define TRANSFORMER_1_TF779A9DA86F954469CABF99E43E5D2126D6C7558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.UInt64>
struct  Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TF779A9DA86F954469CABF99E43E5D2126D6C7558_H
#ifndef TRANSFORMER_1_T1C9601B96FC325D98CD121FFF18A903AE06F926D_H
#define TRANSFORMER_1_T1C9601B96FC325D98CD121FFF18A903AE06F926D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.UIntPtr>
struct  Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T1C9601B96FC325D98CD121FFF18A903AE06F926D_H
#ifndef TRANSFORMER_1_T8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD_H
#define TRANSFORMER_1_T8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Boolean>
struct  Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD_H
#ifndef TRANSFORMER_1_T65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51_H
#define TRANSFORMER_1_T65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Byte>
struct  Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51_H
#ifndef TRANSFORMER_1_T94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3_H
#define TRANSFORMER_1_T94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Char>
struct  Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3_H
#ifndef TRANSFORMER_1_T240346D763F8BC997367E7F857B6F69D68360595_H
#define TRANSFORMER_1_T240346D763F8BC997367E7F857B6F69D68360595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T240346D763F8BC997367E7F857B6F69D68360595_H
#ifndef TRANSFORMER_1_T4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431_H
#define TRANSFORMER_1_T4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.DateTime>
struct  Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431_H
#ifndef TRANSFORMER_1_T92CEE2D0E9F82F259F4B10113D85847D8DE54757_H
#define TRANSFORMER_1_T92CEE2D0E9F82F259F4B10113D85847D8DE54757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.DateTimeOffset>
struct  Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T92CEE2D0E9F82F259F4B10113D85847D8DE54757_H
#ifndef TRANSFORMER_1_TE3062CB768903660C5318F9D9B7DDE15A714588C_H
#define TRANSFORMER_1_TE3062CB768903660C5318F9D9B7DDE15A714588C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Decimal>
struct  Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TE3062CB768903660C5318F9D9B7DDE15A714588C_H
#ifndef TRANSFORMER_1_TBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C_H
#define TRANSFORMER_1_TBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C_H
#ifndef TRANSFORMER_1_TFA2CCE2417FF56944AD841B7ED04360314120497_H
#define TRANSFORMER_1_TFA2CCE2417FF56944AD841B7ED04360314120497_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Double>
struct  Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TFA2CCE2417FF56944AD841B7ED04360314120497_H
#ifndef TRANSFORMER_1_T10C9C25A5618D14E4E001BDF9E20419A10A6DFB9_H
#define TRANSFORMER_1_T10C9C25A5618D14E4E001BDF9E20419A10A6DFB9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Guid>
struct  Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T10C9C25A5618D14E4E001BDF9E20419A10A6DFB9_H
#ifndef TRANSFORMER_1_TF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8_H
#define TRANSFORMER_1_TF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Int16>
struct  Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8_H
#ifndef TRANSFORMER_1_TA741C25CF64E7496C977BB826C7D60FA98E8C970_H
#define TRANSFORMER_1_TA741C25CF64E7496C977BB826C7D60FA98E8C970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Int32>
struct  Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TA741C25CF64E7496C977BB826C7D60FA98E8C970_H
#ifndef TRANSFORMER_1_T23A5C3116CBF683F9F68EE3DDFF0E12802831AC4_H
#define TRANSFORMER_1_T23A5C3116CBF683F9F68EE3DDFF0E12802831AC4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Int64>
struct  Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T23A5C3116CBF683F9F68EE3DDFF0E12802831AC4_H
#ifndef TRANSFORMER_1_TDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231_H
#define TRANSFORMER_1_TDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.IntPtr>
struct  Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231_H
#ifndef TRANSFORMER_1_T026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F_H
#define TRANSFORMER_1_T026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Object>
struct  Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F_H
#ifndef TRANSFORMER_1_T1358C14103D206B57FA822096A13BEDC1A7A4048_H
#define TRANSFORMER_1_T1358C14103D206B57FA822096A13BEDC1A7A4048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.SByte>
struct  Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T1358C14103D206B57FA822096A13BEDC1A7A4048_H
#ifndef TRANSFORMER_1_T761E0F084572634E94674D7C1912B56771C73045_H
#define TRANSFORMER_1_T761E0F084572634E94674D7C1912B56771C73045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Single>
struct  Transformer_1_t761E0F084572634E94674D7C1912B56771C73045  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T761E0F084572634E94674D7C1912B56771C73045_H
#ifndef TRANSFORMER_1_TD23E5E6A1A391F332A34AA4663D09426093C002A_H
#define TRANSFORMER_1_TD23E5E6A1A391F332A34AA4663D09426093C002A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.TimeSpan>
struct  Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TD23E5E6A1A391F332A34AA4663D09426093C002A_H
#ifndef TRANSFORMER_1_TD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77_H
#define TRANSFORMER_1_TD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.UInt16>
struct  Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77_H
#ifndef TRANSFORMER_1_T385ECD51AD4E2A1E86876F87BF89844FDE07DD32_H
#define TRANSFORMER_1_T385ECD51AD4E2A1E86876F87BF89844FDE07DD32_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.UInt32>
struct  Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T385ECD51AD4E2A1E86876F87BF89844FDE07DD32_H
#ifndef TRANSFORMER_1_T0698CC99B4FA18A0050698BCB1D646E8C1C22984_H
#define TRANSFORMER_1_T0698CC99B4FA18A0050698BCB1D646E8C1C22984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.UInt64>
struct  Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T0698CC99B4FA18A0050698BCB1D646E8C1C22984_H
#ifndef TRANSFORMER_1_T6585D4102CCBAE872252AC5E0732CC8EF79DBB20_H
#define TRANSFORMER_1_T6585D4102CCBAE872252AC5E0732CC8EF79DBB20_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.UIntPtr>
struct  Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T6585D4102CCBAE872252AC5E0732CC8EF79DBB20_H
#ifndef TRANSFORMER_1_T2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B_H
#define TRANSFORMER_1_T2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Boolean>
struct  Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B_H
#ifndef TRANSFORMER_1_T2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C_H
#define TRANSFORMER_1_T2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Byte>
struct  Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C_H
#ifndef TRANSFORMER_1_T79A0EA03C0758462B77611F0C5FF7EB4477F9D95_H
#define TRANSFORMER_1_T79A0EA03C0758462B77611F0C5FF7EB4477F9D95_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Char>
struct  Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T79A0EA03C0758462B77611F0C5FF7EB4477F9D95_H
#ifndef TRANSFORMER_1_T3FB65B12F9B30A5AA121C6225ABBD98671D135DE_H
#define TRANSFORMER_1_T3FB65B12F9B30A5AA121C6225ABBD98671D135DE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T3FB65B12F9B30A5AA121C6225ABBD98671D135DE_H
#ifndef TRANSFORMER_1_T00DC76E5BE87873705F91E95AEF9B620DA10C64A_H
#define TRANSFORMER_1_T00DC76E5BE87873705F91E95AEF9B620DA10C64A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.DateTime>
struct  Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T00DC76E5BE87873705F91E95AEF9B620DA10C64A_H
#ifndef TRANSFORMER_1_TE5EF3DB7DB9777B2A122766AB8A2227D1C094B79_H
#define TRANSFORMER_1_TE5EF3DB7DB9777B2A122766AB8A2227D1C094B79_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.DateTimeOffset>
struct  Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TE5EF3DB7DB9777B2A122766AB8A2227D1C094B79_H
#ifndef TRANSFORMER_1_T25C83F04D27EBB3953BD3252D27F944B7081EFD4_H
#define TRANSFORMER_1_T25C83F04D27EBB3953BD3252D27F944B7081EFD4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Decimal>
struct  Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T25C83F04D27EBB3953BD3252D27F944B7081EFD4_H
#ifndef TRANSFORMER_1_T0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8_H
#define TRANSFORMER_1_T0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8_H
#ifndef TRANSFORMER_1_T68826869D55A324A082EE643E06DFE0549C43F1B_H
#define TRANSFORMER_1_T68826869D55A324A082EE643E06DFE0549C43F1B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Double>
struct  Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T68826869D55A324A082EE643E06DFE0549C43F1B_H
#ifndef TRANSFORMER_1_TAE2C376EED3A46831CB52406C90F7FF43F1F9F05_H
#define TRANSFORMER_1_TAE2C376EED3A46831CB52406C90F7FF43F1F9F05_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Guid>
struct  Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TAE2C376EED3A46831CB52406C90F7FF43F1F9F05_H
#ifndef TRANSFORMER_1_T09EADD81A9C2CA1C3043FA5CD6706CA1530666E0_H
#define TRANSFORMER_1_T09EADD81A9C2CA1C3043FA5CD6706CA1530666E0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Int16>
struct  Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T09EADD81A9C2CA1C3043FA5CD6706CA1530666E0_H
#ifndef TRANSFORMER_1_T9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6_H
#define TRANSFORMER_1_T9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Int32>
struct  Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6_H
#ifndef TRANSFORMER_1_T8B62B5B7F2FBA49FF26EC65A644535089EF385F2_H
#define TRANSFORMER_1_T8B62B5B7F2FBA49FF26EC65A644535089EF385F2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Int64>
struct  Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T8B62B5B7F2FBA49FF26EC65A644535089EF385F2_H
#ifndef TRANSFORMER_1_TE65E26BDA2D86514F0E4F7DCA655FD6391C3498A_H
#define TRANSFORMER_1_TE65E26BDA2D86514F0E4F7DCA655FD6391C3498A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.IntPtr>
struct  Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TE65E26BDA2D86514F0E4F7DCA655FD6391C3498A_H
#ifndef TRANSFORMER_1_T65992AEC496277643CBC80A2F9BED723063EB848_H
#define TRANSFORMER_1_T65992AEC496277643CBC80A2F9BED723063EB848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Object>
struct  Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T65992AEC496277643CBC80A2F9BED723063EB848_H
#ifndef TRANSFORMER_1_T8A499D6FEF7443CA4CE5419B243505BB61DE7DEF_H
#define TRANSFORMER_1_T8A499D6FEF7443CA4CE5419B243505BB61DE7DEF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.SByte>
struct  Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T8A499D6FEF7443CA4CE5419B243505BB61DE7DEF_H
#ifndef TRANSFORMER_1_T69D9451801937FE2AFF99FCCE268AA878D643D9B_H
#define TRANSFORMER_1_T69D9451801937FE2AFF99FCCE268AA878D643D9B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Single>
struct  Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T69D9451801937FE2AFF99FCCE268AA878D643D9B_H
#ifndef TRANSFORMER_1_TE86E929A9B1ED9F0643091DE20F815B92553CA94_H
#define TRANSFORMER_1_TE86E929A9B1ED9F0643091DE20F815B92553CA94_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.TimeSpan>
struct  Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TE86E929A9B1ED9F0643091DE20F815B92553CA94_H
#ifndef TRANSFORMER_1_T4021B15333DAA448023DFF6ED2E859037D86D3D9_H
#define TRANSFORMER_1_T4021B15333DAA448023DFF6ED2E859037D86D3D9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.UInt16>
struct  Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T4021B15333DAA448023DFF6ED2E859037D86D3D9_H
#ifndef TRANSFORMER_1_T1D933EC313B2537F0734DE0A2C329C45BFC02BEE_H
#define TRANSFORMER_1_T1D933EC313B2537F0734DE0A2C329C45BFC02BEE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.UInt32>
struct  Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T1D933EC313B2537F0734DE0A2C329C45BFC02BEE_H
#ifndef TRANSFORMER_1_TB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D_H
#define TRANSFORMER_1_TB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.UInt64>
struct  Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D_H
#ifndef TRANSFORMER_1_T64BE2DF002F043C82C776B57E74B06CBF540475A_H
#define TRANSFORMER_1_T64BE2DF002F043C82C776B57E74B06CBF540475A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.UIntPtr>
struct  Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T64BE2DF002F043C82C776B57E74B06CBF540475A_H
#ifndef TRANSFORMER_1_TEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82_H
#define TRANSFORMER_1_TEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Boolean>
struct  Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82_H
#ifndef TRANSFORMER_1_TEE83BA38EF2ECC4720D526BBB03AD2D7847DC673_H
#define TRANSFORMER_1_TEE83BA38EF2ECC4720D526BBB03AD2D7847DC673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Byte>
struct  Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TEE83BA38EF2ECC4720D526BBB03AD2D7847DC673_H
#ifndef TRANSFORMER_1_T9BA41A256E2DA69FF4771DEB014C7A916468BC66_H
#define TRANSFORMER_1_T9BA41A256E2DA69FF4771DEB014C7A916468BC66_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Char>
struct  Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T9BA41A256E2DA69FF4771DEB014C7A916468BC66_H
#ifndef TRANSFORMER_1_T522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6_H
#define TRANSFORMER_1_T522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6_H
#ifndef TRANSFORMER_1_TCA45FD544A9D029E08729452F32B044016B2F8EE_H
#define TRANSFORMER_1_TCA45FD544A9D029E08729452F32B044016B2F8EE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.DateTime>
struct  Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TCA45FD544A9D029E08729452F32B044016B2F8EE_H
#ifndef TRANSFORMER_1_T857CBA0AC2F70C8D74D8183C19537F7A692F21A7_H
#define TRANSFORMER_1_T857CBA0AC2F70C8D74D8183C19537F7A692F21A7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.DateTimeOffset>
struct  Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T857CBA0AC2F70C8D74D8183C19537F7A692F21A7_H
#ifndef TRANSFORMER_1_TE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2_H
#define TRANSFORMER_1_TE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Decimal>
struct  Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2_H
#ifndef TRANSFORMER_1_T41E828E06402D572E82833CAFA0E9727745F7A0D_H
#define TRANSFORMER_1_T41E828E06402D572E82833CAFA0E9727745F7A0D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T41E828E06402D572E82833CAFA0E9727745F7A0D_H
#ifndef TRANSFORMER_1_TD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A_H
#define TRANSFORMER_1_TD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Double>
struct  Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A_H
#ifndef TRANSFORMER_1_T39D48650F87DB03E776EE44D5C8F156643CCD9A0_H
#define TRANSFORMER_1_T39D48650F87DB03E776EE44D5C8F156643CCD9A0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Guid>
struct  Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T39D48650F87DB03E776EE44D5C8F156643CCD9A0_H
#ifndef TRANSFORMER_1_TC51C59F619800C8468ED4694D7779761A5403071_H
#define TRANSFORMER_1_TC51C59F619800C8468ED4694D7779761A5403071_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Int16>
struct  Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TC51C59F619800C8468ED4694D7779761A5403071_H
#ifndef TRANSFORMER_1_TCB26A79652B363A8064BBAF43700A09A80610C91_H
#define TRANSFORMER_1_TCB26A79652B363A8064BBAF43700A09A80610C91_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Int32>
struct  Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TCB26A79652B363A8064BBAF43700A09A80610C91_H
#ifndef TRANSFORMER_1_TB3B4F4C80F506532A9BC19E9995C82DE17840E96_H
#define TRANSFORMER_1_TB3B4F4C80F506532A9BC19E9995C82DE17840E96_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Int64>
struct  Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TB3B4F4C80F506532A9BC19E9995C82DE17840E96_H
#ifndef TRANSFORMER_1_T60B3D9EF53100FA49F00B43536652E9473B31171_H
#define TRANSFORMER_1_T60B3D9EF53100FA49F00B43536652E9473B31171_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.IntPtr>
struct  Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T60B3D9EF53100FA49F00B43536652E9473B31171_H
#ifndef TRANSFORMER_1_T55A8AAC336D2E181D0CC38D11BD1B30145E6479D_H
#define TRANSFORMER_1_T55A8AAC336D2E181D0CC38D11BD1B30145E6479D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Object>
struct  Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T55A8AAC336D2E181D0CC38D11BD1B30145E6479D_H
#ifndef TRANSFORMER_1_T01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31_H
#define TRANSFORMER_1_T01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.SByte>
struct  Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31_H
#ifndef TRANSFORMER_1_TDC0440FA1979CE8CAEE05E55C3F77B191B3864A5_H
#define TRANSFORMER_1_TDC0440FA1979CE8CAEE05E55C3F77B191B3864A5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Single>
struct  Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TDC0440FA1979CE8CAEE05E55C3F77B191B3864A5_H
#ifndef TRANSFORMER_1_T5D03480C8430BB4B110B1A825293797FEA351E99_H
#define TRANSFORMER_1_T5D03480C8430BB4B110B1A825293797FEA351E99_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.TimeSpan>
struct  Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T5D03480C8430BB4B110B1A825293797FEA351E99_H
#ifndef TRANSFORMER_1_T8A89FB68F46FF4353E966CC00B908CA34497EA95_H
#define TRANSFORMER_1_T8A89FB68F46FF4353E966CC00B908CA34497EA95_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.UInt16>
struct  Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T8A89FB68F46FF4353E966CC00B908CA34497EA95_H
#ifndef TRANSFORMER_1_T0AFADFC854814929C26DD9D901BE57FF25AD0FAE_H
#define TRANSFORMER_1_T0AFADFC854814929C26DD9D901BE57FF25AD0FAE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.UInt32>
struct  Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T0AFADFC854814929C26DD9D901BE57FF25AD0FAE_H
#ifndef TRANSFORMER_1_T1DABC0789361F050A97DCB9B0BF426488849447B_H
#define TRANSFORMER_1_T1DABC0789361F050A97DCB9B0BF426488849447B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.UInt64>
struct  Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T1DABC0789361F050A97DCB9B0BF426488849447B_H
#ifndef TRANSFORMER_1_TB15772C7E9B7C5700966A8D43542601D4E3C1E66_H
#define TRANSFORMER_1_TB15772C7E9B7C5700966A8D43542601D4E3C1E66_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.UIntPtr>
struct  Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TB15772C7E9B7C5700966A8D43542601D4E3C1E66_H
#ifndef TRANSFORMER_1_T338D76BCAA91120B467D3111015F22FB4F0FD2FA_H
#define TRANSFORMER_1_T338D76BCAA91120B467D3111015F22FB4F0FD2FA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Object,System.Object>
struct  Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T338D76BCAA91120B467D3111015F22FB4F0FD2FA_H
#ifndef TRANSFORMER_1_T79570F2F3007DB1835D814B8075FDC98BC3553A7_H
#define TRANSFORMER_1_T79570F2F3007DB1835D814B8075FDC98BC3553A7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Boolean>
struct  Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T79570F2F3007DB1835D814B8075FDC98BC3553A7_H
#ifndef TRANSFORMER_1_TF8540D89C13FFD7703F79D80D228D878E23A3ADE_H
#define TRANSFORMER_1_TF8540D89C13FFD7703F79D80D228D878E23A3ADE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Byte>
struct  Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TF8540D89C13FFD7703F79D80D228D878E23A3ADE_H
#ifndef TRANSFORMER_1_TA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E_H
#define TRANSFORMER_1_TA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Char>
struct  Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E_H
#ifndef TRANSFORMER_1_T42D4002780D07F2123783F0D69A304CD6984F13D_H
#define TRANSFORMER_1_T42D4002780D07F2123783F0D69A304CD6984F13D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T42D4002780D07F2123783F0D69A304CD6984F13D_H
#ifndef TRANSFORMER_1_T7B71FCE554A579C8F8EE31C925E7CC3A260F65B0_H
#define TRANSFORMER_1_T7B71FCE554A579C8F8EE31C925E7CC3A260F65B0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.DateTime>
struct  Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T7B71FCE554A579C8F8EE31C925E7CC3A260F65B0_H
#ifndef TRANSFORMER_1_T0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324_H
#define TRANSFORMER_1_T0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.DateTimeOffset>
struct  Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324_H
#ifndef TRANSFORMER_1_TC8E702F6B3A43AAD921E235014B8BEE380D6C8E6_H
#define TRANSFORMER_1_TC8E702F6B3A43AAD921E235014B8BEE380D6C8E6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Decimal>
struct  Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TC8E702F6B3A43AAD921E235014B8BEE380D6C8E6_H
#ifndef TRANSFORMER_1_TBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53_H
#define TRANSFORMER_1_TBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53_H
#ifndef TRANSFORMER_1_TF0766B96906F251FDCA58F9C63D53C429A053601_H
#define TRANSFORMER_1_TF0766B96906F251FDCA58F9C63D53C429A053601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Double>
struct  Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TF0766B96906F251FDCA58F9C63D53C429A053601_H
#ifndef TRANSFORMER_1_TBBF50A3F30EEFDE66991F29F64E2D0A0455DE463_H
#define TRANSFORMER_1_TBBF50A3F30EEFDE66991F29F64E2D0A0455DE463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Guid>
struct  Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TBBF50A3F30EEFDE66991F29F64E2D0A0455DE463_H
#ifndef TRANSFORMER_1_TA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4_H
#define TRANSFORMER_1_TA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Int16>
struct  Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4_H
#ifndef TRANSFORMER_1_TD3A676069C04AAC638676241B25E06E84FEDDF60_H
#define TRANSFORMER_1_TD3A676069C04AAC638676241B25E06E84FEDDF60_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Int32>
struct  Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TD3A676069C04AAC638676241B25E06E84FEDDF60_H
#ifndef TRANSFORMER_1_TE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084_H
#define TRANSFORMER_1_TE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Int64>
struct  Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084_H
#ifndef TRANSFORMER_1_TAE4605051B411219A47F37FD57F817C772C5D831_H
#define TRANSFORMER_1_TAE4605051B411219A47F37FD57F817C772C5D831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.IntPtr>
struct  Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TAE4605051B411219A47F37FD57F817C772C5D831_H
#ifndef TRANSFORMER_1_T2100917DAFFEBF22F25BC5382C00308AE7962D49_H
#define TRANSFORMER_1_T2100917DAFFEBF22F25BC5382C00308AE7962D49_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Object>
struct  Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T2100917DAFFEBF22F25BC5382C00308AE7962D49_H
#ifndef TRANSFORMER_1_T745DB47A09FCB8577D6C816C1169CFECBB32F2C5_H
#define TRANSFORMER_1_T745DB47A09FCB8577D6C816C1169CFECBB32F2C5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.SByte>
struct  Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T745DB47A09FCB8577D6C816C1169CFECBB32F2C5_H
#ifndef TRANSFORMER_1_TBF9E21F5E62125133BAE8AB29F7A5FF8368A8867_H
#define TRANSFORMER_1_TBF9E21F5E62125133BAE8AB29F7A5FF8368A8867_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Single>
struct  Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TBF9E21F5E62125133BAE8AB29F7A5FF8368A8867_H
#ifndef TRANSFORMER_1_TF26DF9ED555578458A4BEBCC536B42CFE02ACC80_H
#define TRANSFORMER_1_TF26DF9ED555578458A4BEBCC536B42CFE02ACC80_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.TimeSpan>
struct  Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TF26DF9ED555578458A4BEBCC536B42CFE02ACC80_H
#ifndef TRANSFORMER_1_T8D669EF524B3DA7294AF5ECC32689F786670F3BC_H
#define TRANSFORMER_1_T8D669EF524B3DA7294AF5ECC32689F786670F3BC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.UInt16>
struct  Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T8D669EF524B3DA7294AF5ECC32689F786670F3BC_H
#ifndef TRANSFORMER_1_T2C09253351F9C203CF31F34A19DE66BEA03581F3_H
#define TRANSFORMER_1_T2C09253351F9C203CF31F34A19DE66BEA03581F3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.UInt32>
struct  Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T2C09253351F9C203CF31F34A19DE66BEA03581F3_H
#ifndef TRANSFORMER_1_TCF1372796CC314E10F8635C4972C44383BAC7023_H
#define TRANSFORMER_1_TCF1372796CC314E10F8635C4972C44383BAC7023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.UInt64>
struct  Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TCF1372796CC314E10F8635C4972C44383BAC7023_H
#ifndef TRANSFORMER_1_TBE6DD3E5AECE0264800ECFE10CF373FC541893E1_H
#define TRANSFORMER_1_TBE6DD3E5AECE0264800ECFE10CF373FC541893E1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.UIntPtr>
struct  Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TBE6DD3E5AECE0264800ECFE10CF373FC541893E1_H
#ifndef TRANSFORMER_1_T199C978828CCDD3DC4B333BD031B5DA73DE2C968_H
#define TRANSFORMER_1_T199C978828CCDD3DC4B333BD031B5DA73DE2C968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Boolean>
struct  Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T199C978828CCDD3DC4B333BD031B5DA73DE2C968_H
#ifndef TRANSFORMER_1_T6F5F45E771B014CBE6BC711CD4C78E85A692E83F_H
#define TRANSFORMER_1_T6F5F45E771B014CBE6BC711CD4C78E85A692E83F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Byte>
struct  Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T6F5F45E771B014CBE6BC711CD4C78E85A692E83F_H
#ifndef TRANSFORMER_1_TBBFF9537117C5BC9379D753F5293135DB33DF769_H
#define TRANSFORMER_1_TBBFF9537117C5BC9379D753F5293135DB33DF769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Char>
struct  Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TBBFF9537117C5BC9379D753F5293135DB33DF769_H
#ifndef TRANSFORMER_1_T43360C920C6CB99E177E7D0C21F4631EB7353195_H
#define TRANSFORMER_1_T43360C920C6CB99E177E7D0C21F4631EB7353195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T43360C920C6CB99E177E7D0C21F4631EB7353195_H
#ifndef TRANSFORMER_1_TFF97AD2C8962456276364E309A52E6DE33100D56_H
#define TRANSFORMER_1_TFF97AD2C8962456276364E309A52E6DE33100D56_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.DateTime>
struct  Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TFF97AD2C8962456276364E309A52E6DE33100D56_H
#ifndef TRANSFORMER_1_T43FCC452C755864725F9DF93DFBE108575461B01_H
#define TRANSFORMER_1_T43FCC452C755864725F9DF93DFBE108575461B01_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.DateTimeOffset>
struct  Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T43FCC452C755864725F9DF93DFBE108575461B01_H
#ifndef TRANSFORMER_1_T0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC_H
#define TRANSFORMER_1_T0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Decimal>
struct  Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC_H
#ifndef TRANSFORMER_1_T4E404370A1452595E3C5DB7882E5D8953D10E1A5_H
#define TRANSFORMER_1_T4E404370A1452595E3C5DB7882E5D8953D10E1A5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T4E404370A1452595E3C5DB7882E5D8953D10E1A5_H
#ifndef TRANSFORMER_1_T96993E76204149647596BB8B93F89AF01BBC2DA1_H
#define TRANSFORMER_1_T96993E76204149647596BB8B93F89AF01BBC2DA1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Double>
struct  Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T96993E76204149647596BB8B93F89AF01BBC2DA1_H
#ifndef TRANSFORMER_1_TC04472BECF0E4CEEAC0DD81250C1C45100A49760_H
#define TRANSFORMER_1_TC04472BECF0E4CEEAC0DD81250C1C45100A49760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Guid>
struct  Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TC04472BECF0E4CEEAC0DD81250C1C45100A49760_H
#ifndef TRANSFORMER_1_T752D0C62D1A2E9A30D3F6E06FB35683298BACEE8_H
#define TRANSFORMER_1_T752D0C62D1A2E9A30D3F6E06FB35683298BACEE8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Int16>
struct  Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T752D0C62D1A2E9A30D3F6E06FB35683298BACEE8_H
#ifndef TRANSFORMER_1_TA6B55D2D785634BAC127EF306F25AD47252837A5_H
#define TRANSFORMER_1_TA6B55D2D785634BAC127EF306F25AD47252837A5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Int32>
struct  Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TA6B55D2D785634BAC127EF306F25AD47252837A5_H
#ifndef TRANSFORMER_1_T634A2D481C50B029D59732E0A8E9D02DF66A0551_H
#define TRANSFORMER_1_T634A2D481C50B029D59732E0A8E9D02DF66A0551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Int64>
struct  Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T634A2D481C50B029D59732E0A8E9D02DF66A0551_H
#ifndef TRANSFORMER_1_T873B2E4C2418F756278367655E1C64D654382460_H
#define TRANSFORMER_1_T873B2E4C2418F756278367655E1C64D654382460_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.IntPtr>
struct  Transformer_1_t873B2E4C2418F756278367655E1C64D654382460  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T873B2E4C2418F756278367655E1C64D654382460_H
#ifndef TRANSFORMER_1_T892625DF88EAC62E91E8CCC189CB451B8DC38F37_H
#define TRANSFORMER_1_T892625DF88EAC62E91E8CCC189CB451B8DC38F37_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Object>
struct  Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T892625DF88EAC62E91E8CCC189CB451B8DC38F37_H
#ifndef TRANSFORMER_1_T1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A_H
#define TRANSFORMER_1_T1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.SByte>
struct  Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A_H
#ifndef TRANSFORMER_1_T4E1FF663FF50350704657A112291CD7D7596CEF1_H
#define TRANSFORMER_1_T4E1FF663FF50350704657A112291CD7D7596CEF1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Single>
struct  Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T4E1FF663FF50350704657A112291CD7D7596CEF1_H
#ifndef TRANSFORMER_1_T91133D744423C020A19D0092C4FC03B6D3A4DFEE_H
#define TRANSFORMER_1_T91133D744423C020A19D0092C4FC03B6D3A4DFEE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.TimeSpan>
struct  Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T91133D744423C020A19D0092C4FC03B6D3A4DFEE_H
#ifndef TRANSFORMER_1_TE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62_H
#define TRANSFORMER_1_TE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.UInt16>
struct  Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62_H
#ifndef TRANSFORMER_1_T1438E2C5AF736F2BAA3201667918AA58BE8FA46C_H
#define TRANSFORMER_1_T1438E2C5AF736F2BAA3201667918AA58BE8FA46C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.UInt32>
struct  Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T1438E2C5AF736F2BAA3201667918AA58BE8FA46C_H
#ifndef TRANSFORMER_1_T9D893B0CF47F60B5A1B332F156AE7885A7FA04AD_H
#define TRANSFORMER_1_T9D893B0CF47F60B5A1B332F156AE7885A7FA04AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.UInt64>
struct  Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T9D893B0CF47F60B5A1B332F156AE7885A7FA04AD_H
#ifndef TRANSFORMER_1_TEF0B2B94C98E007D79F1E9A305F95F950D695A78_H
#define TRANSFORMER_1_TEF0B2B94C98E007D79F1E9A305F95F950D695A78_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.UIntPtr>
struct  Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TEF0B2B94C98E007D79F1E9A305F95F950D695A78_H
#ifndef TRANSFORMER_1_TF0E9BE6348CE010BB238AC31417785A08A6FB691_H
#define TRANSFORMER_1_TF0E9BE6348CE010BB238AC31417785A08A6FB691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Boolean>
struct  Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TF0E9BE6348CE010BB238AC31417785A08A6FB691_H
#ifndef TRANSFORMER_1_TB3723D31B530FDEAA4A1F13AA0708DA982630899_H
#define TRANSFORMER_1_TB3723D31B530FDEAA4A1F13AA0708DA982630899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Byte>
struct  Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TB3723D31B530FDEAA4A1F13AA0708DA982630899_H
#ifndef TRANSFORMER_1_T5476CAC37A40442328D49FE071C30E88285071D4_H
#define TRANSFORMER_1_T5476CAC37A40442328D49FE071C30E88285071D4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Char>
struct  Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T5476CAC37A40442328D49FE071C30E88285071D4_H
#ifndef TRANSFORMER_1_T0FB7630995436BE02A2527779DBC4F2527867EEA_H
#define TRANSFORMER_1_T0FB7630995436BE02A2527779DBC4F2527867EEA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T0FB7630995436BE02A2527779DBC4F2527867EEA_H
#ifndef TRANSFORMER_1_T5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52_H
#define TRANSFORMER_1_T5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.DateTime>
struct  Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52_H
#ifndef TRANSFORMER_1_T928A4BC9752332E7976045EDA7D13F6580E95E62_H
#define TRANSFORMER_1_T928A4BC9752332E7976045EDA7D13F6580E95E62_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.DateTimeOffset>
struct  Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T928A4BC9752332E7976045EDA7D13F6580E95E62_H
#ifndef TRANSFORMER_1_TDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC_H
#define TRANSFORMER_1_TDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Decimal>
struct  Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC_H
#ifndef TRANSFORMER_1_TC99356A59E2E936732EB9B87073CB69F8D9A0E56_H
#define TRANSFORMER_1_TC99356A59E2E936732EB9B87073CB69F8D9A0E56_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TC99356A59E2E936732EB9B87073CB69F8D9A0E56_H
#ifndef TRANSFORMER_1_TBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6_H
#define TRANSFORMER_1_TBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Double>
struct  Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6_H
#ifndef TRANSFORMER_1_TEB01E6A2E0B3756D68B5715EC212184D5FF1583E_H
#define TRANSFORMER_1_TEB01E6A2E0B3756D68B5715EC212184D5FF1583E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Guid>
struct  Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TEB01E6A2E0B3756D68B5715EC212184D5FF1583E_H
#ifndef TRANSFORMER_1_T2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4_H
#define TRANSFORMER_1_T2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Int16>
struct  Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4_H
#ifndef TRANSFORMER_1_TEE904E877A0E7069658C31FC99833B17AC05794C_H
#define TRANSFORMER_1_TEE904E877A0E7069658C31FC99833B17AC05794C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Int32>
struct  Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TEE904E877A0E7069658C31FC99833B17AC05794C_H
#ifndef TRANSFORMER_1_TB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D_H
#define TRANSFORMER_1_TB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Int64>
struct  Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D_H
#ifndef TRANSFORMER_1_TD21324C229A06C2679EF7ADBF30B4721FCE846A9_H
#define TRANSFORMER_1_TD21324C229A06C2679EF7ADBF30B4721FCE846A9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.IntPtr>
struct  Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TD21324C229A06C2679EF7ADBF30B4721FCE846A9_H
#ifndef TRANSFORMER_1_T9591C03D292D1491DC84BED40FA4074B4BA228BA_H
#define TRANSFORMER_1_T9591C03D292D1491DC84BED40FA4074B4BA228BA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Object>
struct  Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T9591C03D292D1491DC84BED40FA4074B4BA228BA_H
#ifndef TRANSFORMER_1_TB8774B9E44E29CAB971A668FD6481EE169AB7512_H
#define TRANSFORMER_1_TB8774B9E44E29CAB971A668FD6481EE169AB7512_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.SByte>
struct  Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TB8774B9E44E29CAB971A668FD6481EE169AB7512_H
#ifndef TRANSFORMER_1_TF0690E4E722BA56F3D7C83E9AEB806F0B61B361D_H
#define TRANSFORMER_1_TF0690E4E722BA56F3D7C83E9AEB806F0B61B361D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Single>
struct  Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TF0690E4E722BA56F3D7C83E9AEB806F0B61B361D_H
#ifndef TRANSFORMER_1_T8B10503B337E6FE4E07A3B64D22B131931C9A9F4_H
#define TRANSFORMER_1_T8B10503B337E6FE4E07A3B64D22B131931C9A9F4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.TimeSpan>
struct  Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T8B10503B337E6FE4E07A3B64D22B131931C9A9F4_H
#ifndef TRANSFORMER_1_T047D5C4AD3C79057AB7D69ECC9D23F74520D09D6_H
#define TRANSFORMER_1_T047D5C4AD3C79057AB7D69ECC9D23F74520D09D6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.UInt16>
struct  Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T047D5C4AD3C79057AB7D69ECC9D23F74520D09D6_H
#ifndef TRANSFORMER_1_T31C88D9234A257CF232D08C38BBC668EA052939A_H
#define TRANSFORMER_1_T31C88D9234A257CF232D08C38BBC668EA052939A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.UInt32>
struct  Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T31C88D9234A257CF232D08C38BBC668EA052939A_H
#ifndef TRANSFORMER_1_T1C223741D12F9A057F5F088DE61B4E5D53913211_H
#define TRANSFORMER_1_T1C223741D12F9A057F5F088DE61B4E5D53913211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.UInt64>
struct  Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T1C223741D12F9A057F5F088DE61B4E5D53913211_H
#ifndef TRANSFORMER_1_TEB25E9328D7461EC15D82291238C49E2485032FD_H
#define TRANSFORMER_1_TEB25E9328D7461EC15D82291238C49E2485032FD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.UIntPtr>
struct  Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TEB25E9328D7461EC15D82291238C49E2485032FD_H
#ifndef TRANSFORMER_1_TE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5_H
#define TRANSFORMER_1_TE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Boolean>
struct  Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5_H
#ifndef TRANSFORMER_1_TA04593391E3C9151CF09B88E7F0B95B6EED79BFF_H
#define TRANSFORMER_1_TA04593391E3C9151CF09B88E7F0B95B6EED79BFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Byte>
struct  Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TA04593391E3C9151CF09B88E7F0B95B6EED79BFF_H
#ifndef TRANSFORMER_1_T6A70E5F51E34115D67058F5FBD3AD020056FE5F9_H
#define TRANSFORMER_1_T6A70E5F51E34115D67058F5FBD3AD020056FE5F9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Char>
struct  Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T6A70E5F51E34115D67058F5FBD3AD020056FE5F9_H
#ifndef TRANSFORMER_1_T68FC4FB75CD82563AB347351CEFAE5414DA6F5EA_H
#define TRANSFORMER_1_T68FC4FB75CD82563AB347351CEFAE5414DA6F5EA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T68FC4FB75CD82563AB347351CEFAE5414DA6F5EA_H
#ifndef TRANSFORMER_1_T3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3_H
#define TRANSFORMER_1_T3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.DateTime>
struct  Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3_H
#ifndef TRANSFORMER_1_TF6A13C624CBEF022B6BF46EA8998763A1BCF8A60_H
#define TRANSFORMER_1_TF6A13C624CBEF022B6BF46EA8998763A1BCF8A60_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.DateTimeOffset>
struct  Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TF6A13C624CBEF022B6BF46EA8998763A1BCF8A60_H
#ifndef TRANSFORMER_1_T1CCCD2A03706FE289179D42973958253711E1220_H
#define TRANSFORMER_1_T1CCCD2A03706FE289179D42973958253711E1220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Decimal>
struct  Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T1CCCD2A03706FE289179D42973958253711E1220_H
#ifndef TRANSFORMER_1_T26EAA5376E027613D84066BFDACD29135BC0417F_H
#define TRANSFORMER_1_T26EAA5376E027613D84066BFDACD29135BC0417F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T26EAA5376E027613D84066BFDACD29135BC0417F_H
#ifndef TRANSFORMER_1_TF7A377BD38E31E579BBB868F25B50E99BE887082_H
#define TRANSFORMER_1_TF7A377BD38E31E579BBB868F25B50E99BE887082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Double>
struct  Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TF7A377BD38E31E579BBB868F25B50E99BE887082_H
#ifndef TRANSFORMER_1_T7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4_H
#define TRANSFORMER_1_T7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Guid>
struct  Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4_H
#ifndef TRANSFORMER_1_T07F206606D946D6F7126E2639D2BA30EE77B275C_H
#define TRANSFORMER_1_T07F206606D946D6F7126E2639D2BA30EE77B275C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Int16>
struct  Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T07F206606D946D6F7126E2639D2BA30EE77B275C_H
#ifndef TRANSFORMER_1_TF8885F335E1C8610DD2BC9AC39EF6912377CA731_H
#define TRANSFORMER_1_TF8885F335E1C8610DD2BC9AC39EF6912377CA731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Int32>
struct  Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TF8885F335E1C8610DD2BC9AC39EF6912377CA731_H
#ifndef TRANSFORMER_1_TFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71_H
#define TRANSFORMER_1_TFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Int64>
struct  Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71_H
#ifndef TRANSFORMER_1_T8E4B28C9AAE813C657018A0863EED6247E00BC14_H
#define TRANSFORMER_1_T8E4B28C9AAE813C657018A0863EED6247E00BC14_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.IntPtr>
struct  Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T8E4B28C9AAE813C657018A0863EED6247E00BC14_H
#ifndef TRANSFORMER_1_T402296E3476F5F09B16B675F17D3CDA6FCB34A9B_H
#define TRANSFORMER_1_T402296E3476F5F09B16B675F17D3CDA6FCB34A9B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Object>
struct  Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T402296E3476F5F09B16B675F17D3CDA6FCB34A9B_H
#ifndef TRANSFORMER_1_T2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6_H
#define TRANSFORMER_1_T2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.SByte>
struct  Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6_H
#ifndef TRANSFORMER_1_T589CB07AE354480F71F892CCEF416B4B90FD20E1_H
#define TRANSFORMER_1_T589CB07AE354480F71F892CCEF416B4B90FD20E1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Single>
struct  Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T589CB07AE354480F71F892CCEF416B4B90FD20E1_H
#ifndef TRANSFORMER_1_T92CD444E28392786C719A80E3BD6F19859C0F66F_H
#define TRANSFORMER_1_T92CD444E28392786C719A80E3BD6F19859C0F66F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.TimeSpan>
struct  Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T92CD444E28392786C719A80E3BD6F19859C0F66F_H
#ifndef TRANSFORMER_1_TEBBF3209CF2963A466018B425608A6F9A5DB0E30_H
#define TRANSFORMER_1_TEBBF3209CF2963A466018B425608A6F9A5DB0E30_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.UInt16>
struct  Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_TEBBF3209CF2963A466018B425608A6F9A5DB0E30_H
#ifndef TRANSFORMER_1_T8958FB9131F13E8258DE33FA6B69C3FF6197E880_H
#define TRANSFORMER_1_T8958FB9131F13E8258DE33FA6B69C3FF6197E880_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.UInt32>
struct  Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T8958FB9131F13E8258DE33FA6B69C3FF6197E880_H
#ifndef TRANSFORMER_1_T3B28CAE7458C713C7593265008775661D4E2EBAE_H
#define TRANSFORMER_1_T3B28CAE7458C713C7593265008775661D4E2EBAE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.UInt64>
struct  Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T3B28CAE7458C713C7593265008775661D4E2EBAE_H
#ifndef TRANSFORMER_1_T77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913_H
#define TRANSFORMER_1_T77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.UIntPtr>
struct  Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMER_1_T77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913_H
#ifndef PREDICATE_1_T4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979_H
#define PREDICATE_1_T4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<System.Object>
struct  Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979_H
#ifndef EVENTFUNCTION_1_TC8BA6CC6AE9BBB9A4F9703E7EA47532F813105B0_H
#define EVENTFUNCTION_1_TC8BA6CC6AE9BBB9A4F9703E7EA47532F813105B0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<System.Object>
struct  EventFunction_1_tC8BA6CC6AE9BBB9A4F9703E7EA47532F813105B0  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTFUNCTION_1_TC8BA6CC6AE9BBB9A4F9703E7EA47532F813105B0_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>[]
struct KeyValuePair_2U5BU5D_t920EB0A30DD5CE3BAAF02931D1ABDF93367AC84A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_tD85A2E33C726647EDFB2F7F8E7EDC766E3C53B78  m_Items[1];

public:
	inline KeyValuePair_2_tD85A2E33C726647EDFB2F7F8E7EDC766E3C53B78  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tD85A2E33C726647EDFB2F7F8E7EDC766E3C53B78 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tD85A2E33C726647EDFB2F7F8E7EDC766E3C53B78  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_tD85A2E33C726647EDFB2F7F8E7EDC766E3C53B78  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tD85A2E33C726647EDFB2F7F8E7EDC766E3C53B78 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tD85A2E33C726647EDFB2F7F8E7EDC766E3C53B78  value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t4594E4068980FD80C0C538F4F8042A626BC1F262  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  m_Items[1];

public:
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  value)
	{
		m_Items[index] = value;
	}
};
// System.Dynamic.BindingRestrictions_TestBuilder_AndNode[]
struct AndNodeU5BU5D_tCDAE7878A5056262CF069AB9A8C3720BED503611  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AndNode_tCC48979AF5896DA4A881EE49E182099994188916  m_Items[1];

public:
	inline AndNode_tCC48979AF5896DA4A881EE49E182099994188916  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndNode_tCC48979AF5896DA4A881EE49E182099994188916 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndNode_tCC48979AF5896DA4A881EE49E182099994188916  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline AndNode_tCC48979AF5896DA4A881EE49E182099994188916  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndNode_tCC48979AF5896DA4A881EE49E182099994188916 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndNode_tCC48979AF5896DA4A881EE49E182099994188916  value)
	{
		m_Items[index] = value;
	}
};
// System.Linq.Expressions.Interpreter.LocalDefinition[]
struct LocalDefinitionU5BU5D_tE3170C0A3284313CAB9CA6A3B3F79027464F78F5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D  m_Items[1];

public:
	inline LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  m_Items[1];

public:
	inline CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  m_Items[1];

public:
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  m_Items[1];

public:
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  m_Items[1];

public:
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  m_Items[1];

public:
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.LargeArrayBuilder`1<System.Object>::.ctor(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void LargeArrayBuilder_1__ctor_mDC7E68FE169C2CCB5DBE14CAA070A7DF42FFC310_gshared (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.LargeArrayBuilder`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" IL2CPP_METHOD_ATTR void LargeArrayBuilder_1_AddRange_m3B90FE2F12A4CA5255764B6559CC1B9CCC77A3B5_gshared (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B * __this, RuntimeObject* p0, const RuntimeMethod* method);
// T[] System.Collections.Generic.LargeArrayBuilder`1<System.Object>::ToArray()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* LargeArrayBuilder_1_ToArray_m451F9ABC21D56D34FB76B2DE7E355A9413725B3E_gshared (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);

// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Math_Min_mC950438198519FB2B0260FCB91220847EE4BB525 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.LargeArrayBuilder`1<System.Object>::.ctor(System.Boolean)
inline void LargeArrayBuilder_1__ctor_mDC7E68FE169C2CCB5DBE14CAA070A7DF42FFC310 (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B * __this, bool p0, const RuntimeMethod* method)
{
	((  void (*) (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *, bool, const RuntimeMethod*))LargeArrayBuilder_1__ctor_mDC7E68FE169C2CCB5DBE14CAA070A7DF42FFC310_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.LargeArrayBuilder`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void LargeArrayBuilder_1_AddRange_m3B90FE2F12A4CA5255764B6559CC1B9CCC77A3B5 (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *, RuntimeObject*, const RuntimeMethod*))LargeArrayBuilder_1_AddRange_m3B90FE2F12A4CA5255764B6559CC1B9CCC77A3B5_gshared)(__this, p0, method);
}
// T[] System.Collections.Generic.LargeArrayBuilder`1<System.Object>::ToArray()
inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* LargeArrayBuilder_1_ToArray_m451F9ABC21D56D34FB76B2DE7E355A9413725B3E (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B * __this, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *, const RuntimeMethod*))LargeArrayBuilder_1_ToArray_m451F9ABC21D56D34FB76B2DE7E355A9413725B3E_gshared)(__this, method);
}
// System.Void System.Array::CopyTo(System.Array,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_CopyTo_m455300D414FFB0EBFE53EA4E8BBD31532006EBB7 (RuntimeArray * __this, RuntimeArray * p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6 (RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  p0, const RuntimeMethod* method);
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeArray * GameObject_GetComponentsInternal_mAB759217A3AD0831ABD9387163126D391459E1B8 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, Type_t * ___type0, bool ___useSearchTypeAsArrayReturnType1, bool ___recursive2, bool ___includeInactive3, bool ___reverse4, RuntimeObject * ___resultList5, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mesh::DefaultDimensionForChannel(UnityEngine.Rendering.VertexAttribute)
extern "C" IL2CPP_METHOD_ATTR int32_t Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9 (int32_t ___channel0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mesh::get_canAccess()
extern "C" IL2CPP_METHOD_ATTR bool Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mesh::HasChannel(UnityEngine.Rendering.VertexAttribute)
extern "C" IL2CPP_METHOD_ATTR bool Mesh_HasChannel_mF94FB364044F2A0812AF6DDDC811318159D2D4AD (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___ch0, const RuntimeMethod* method);
// System.Array UnityEngine.Mesh::GetAllocArrayFromChannelImpl(UnityEngine.Rendering.VertexAttribute,UnityEngine.Mesh/InternalVertexChannelType,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeArray * Mesh_GetAllocArrayFromChannelImpl_m965F3844FBD29C866754948D036A6BC6ECF89334 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::PrintErrorCantAccessChannel(UnityEngine.Rendering.VertexAttribute)
extern "C" IL2CPP_METHOD_ATTR void Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___ch0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents::GetEventChain(UnityEngine.GameObject,System.Collections.Generic.IList`1<UnityEngine.Transform>)
extern "C" IL2CPP_METHOD_ATTR void ExecuteEvents_GetEventChain_m640191F67AEB374A5E6FD9B1E6CC48CF31FFDCAD (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, RuntimeObject* ___eventChain1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * List_1_get_Item_m6FBF36E821E762256C887A96718EC1B49B67EA8D (List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * (*) (List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_m4413771DE3FCE90800D60FBAFA5909A8E5E4F917 (List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// T[] System.Array::Empty<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>()
extern "C" IL2CPP_METHOD_ATTR KeyValuePair_2U5BU5D_t920EB0A30DD5CE3BAAF02931D1ABDF93367AC84A* Array_Empty_TisKeyValuePair_2_tD85A2E33C726647EDFB2F7F8E7EDC766E3C53B78_m1A60190AB0E2A341E03194FC70B762E9A91708D5_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		KeyValuePair_2U5BU5D_t920EB0A30DD5CE3BAAF02931D1ABDF93367AC84A* L_0 = ((EmptyArray_1_tA835F9169F98551C5189EB04F9D45B0E331E6B98_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::Empty<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>()
extern "C" IL2CPP_METHOD_ATTR KeyValuePair_2U5BU5D_t4594E4068980FD80C0C538F4F8042A626BC1F262* Array_Empty_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_m70299FD71AF4EBCB301FA4BE52FFC24ACB084846_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		KeyValuePair_2U5BU5D_t4594E4068980FD80C0C538F4F8042A626BC1F262* L_0 = ((EmptyArray_1_t11B3969D38E2BF74B97BD01F02D6E2583FAA1D8F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::Empty<System.Dynamic.BindingRestrictions_TestBuilder_AndNode>()
extern "C" IL2CPP_METHOD_ATTR AndNodeU5BU5D_tCDAE7878A5056262CF069AB9A8C3720BED503611* Array_Empty_TisAndNode_tCC48979AF5896DA4A881EE49E182099994188916_m9E80D55E3C3FE96F28C0FCC4B9EE46EF83C9ADE9_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		AndNodeU5BU5D_tCDAE7878A5056262CF069AB9A8C3720BED503611* L_0 = ((EmptyArray_1_t491E776E9DF407C043186AA08D7F688CC85E1C06_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::Empty<System.Linq.Expressions.Interpreter.LocalDefinition>()
extern "C" IL2CPP_METHOD_ATTR LocalDefinitionU5BU5D_tE3170C0A3284313CAB9CA6A3B3F79027464F78F5* Array_Empty_TisLocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D_m6518BAF23EACF07AC885D856B9EA60AFC802C351_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		LocalDefinitionU5BU5D_tE3170C0A3284313CAB9CA6A3B3F79027464F78F5* L_0 = ((EmptyArray_1_t06931CAD9F4797C75EF9E653BBAEA917192828B7_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::Empty<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::FindAll<System.Object>(T[],System.Predicate`1<T>)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___match1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_1 = NULL;
	int32_t V_2 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** G_B9_0 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** G_B10_1 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, (String_t*)_stringLiteral19EDC1210777BA4D45049C29280D9CC5E1064C25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_RuntimeMethod_var);
	}

IL_000e:
	{
		Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * L_2 = ___match1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_3 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_3, (String_t*)_stringLiteralEF5C844EAB88BCACA779BD2F3AD67B573BBBBFCA, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_RuntimeMethod_var);
	}

IL_001c:
	{
		V_0 = (int32_t)0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_4;
		V_2 = (int32_t)0;
		goto IL_006b;
	}

IL_0028:
	{
		Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * L_5 = ___match1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = ___array0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck((Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *)L_5);
		bool L_10 = ((  bool (*) (Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *)L_5, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_11 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = V_1;
		NullCheck(L_12);
		if ((!(((uint32_t)L_11) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length))))))))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_13 = V_0;
		G_B8_0 = (&V_1);
		if (!L_13)
		{
			G_B9_0 = (&V_1);
			goto IL_0047;
		}
	}
	{
		int32_t L_14 = V_0;
		G_B10_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)2));
		G_B10_1 = G_B8_0;
		goto IL_0048;
	}

IL_0047:
	{
		G_B10_0 = 4;
		G_B10_1 = G_B9_0;
	}

IL_0048:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = ___array0;
		NullCheck(L_15);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		int32_t L_16 = Math_Min_mC950438198519FB2B0260FCB91220847EE4BB525((int32_t)G_B10_0, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))), /*hidden argument*/NULL);
		((  void (*) (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)G_B10_1, (int32_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0055:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = V_1;
		int32_t L_18 = V_0;
		int32_t L_19 = (int32_t)L_18;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = ___array0;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (RuntimeObject *)L_23);
	}

IL_0067:
	{
		int32_t L_24 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_006b:
	{
		int32_t L_25 = V_2;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = ___array0;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_26)->max_length)))))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_27 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_28 = V_1;
		NullCheck(L_28);
		if ((((int32_t)L_27) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_28)->max_length)))))))
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_29 = V_0;
		((  void (*) (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)(&V_1), (int32_t)L_29, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_007f:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_30 = V_1;
		return L_30;
	}
}
// T[] System.Collections.Generic.EnumerableHelpers::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<T>)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* EnumerableHelpers_ToArray_TisRuntimeObject_m0C9E5CDDF9B4066E9FC751A904CF977FD78A14EB_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		RuntimeObject* L_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_0 = (RuntimeObject*)L_1;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_2);
		V_2 = (int32_t)L_3;
		int32_t L_4 = V_2;
		if (L_4)
		{
			goto IL_001a;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_5;
	}

IL_001a:
	{
		int32_t L_6 = V_2;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (uint32_t)L_6);
		V_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_7;
		RuntimeObject* L_8 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		InterfaceActionInvoker2< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Object>::CopyTo(!0[],System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_8, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_9, (int32_t)0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = V_3;
		return L_10;
	}

IL_002b:
	{
		LargeArrayBuilder_1__ctor_mDC7E68FE169C2CCB5DBE14CAA070A7DF42FFC310((LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *)(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *)(&V_1), (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		RuntimeObject* L_11 = ___source0;
		LargeArrayBuilder_1_AddRange_m3B90FE2F12A4CA5255764B6559CC1B9CCC77A3B5((LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *)(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *)(&V_1), (RuntimeObject*)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = LargeArrayBuilder_1_ToArray_m451F9ABC21D56D34FB76B2DE7E355A9413725B3E((LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *)(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		return L_12;
	}
}
// T[] System.Dynamic.Utils.CollectionExtensions::AddFirst<System.Object>(T[],T)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* CollectionExtensions_AddFirst_TisRuntimeObject_m2797D93EB867E7B53D1D9B1A7FFB8EFB3913A2E5_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, RuntimeObject * ___item1, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___array0;
		NullCheck(L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), (int32_t)1)));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = V_0;
		RuntimeObject * L_3 = ___item1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ___array0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = V_0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_4);
		Array_CopyTo_m455300D414FFB0EBFE53EA4E8BBD31532006EBB7((RuntimeArray *)(RuntimeArray *)L_4, (RuntimeArray *)(RuntimeArray *)L_5, (int32_t)1, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = V_0;
		return L_6;
	}
}
// T[] System.Dynamic.Utils.CollectionExtensions::AddLast<System.Object>(T[],T)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* CollectionExtensions_AddLast_TisRuntimeObject_mCFBB902E31705E7C9A07DEA1D82080198D8D7C87_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, RuntimeObject * ___item1, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___array0;
		NullCheck(L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), (int32_t)1)));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___array0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_2);
		Array_CopyTo_m455300D414FFB0EBFE53EA4E8BBD31532006EBB7((RuntimeArray *)(RuntimeArray *)L_2, (RuntimeArray *)(RuntimeArray *)L_3, (int32_t)0, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = ___array0;
		NullCheck(L_5);
		RuntimeObject * L_6 = ___item1;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>((((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length))))), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = V_0;
		return L_7;
	}
}
// T[] System.Dynamic.Utils.CollectionExtensions::RemoveFirst<System.Object>(T[])
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* CollectionExtensions_RemoveFirst_TisRuntimeObject_m05278467A5F0AA59D6F8E6AC5FCC92EEFE2B5B70_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___array0;
		NullCheck(L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), (int32_t)1)));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___array0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		NullCheck(L_4);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_2, (int32_t)1, (RuntimeArray *)(RuntimeArray *)L_3, (int32_t)0, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))), /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = V_0;
		return L_5;
	}
}
// T[] System.Dynamic.Utils.CollectionExtensions::RemoveLast<System.Object>(T[])
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* CollectionExtensions_RemoveLast_TisRuntimeObject_mB0B7A94B3575C8674282F02A28E49DC416FC147A_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___array0;
		NullCheck(L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), (int32_t)1)));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___array0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		NullCheck(L_4);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_2, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_3, (int32_t)0, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))), /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = V_0;
		return L_5;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Object>(System.Object[])
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* CustomAttributeData_UnboxValues_TisRuntimeObject_mFB1257FB7BD27255281B2111A20203E3A93E7050_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___values0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___values0;
		NullCheck(L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
		V_1 = (int32_t)0;
		goto IL_0020;
	}

IL_000d:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ___values0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))));
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___values0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = V_0;
		return L_11;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Reflection.CustomAttributeNamedArgument>(System.Object[])
extern "C" IL2CPP_METHOD_ATTR CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* CustomAttributeData_UnboxValues_TisCustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_mC152FBD94252DA2417B7773AE16C51154C9F6A72_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___values0, const RuntimeMethod* method)
{
	CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___values0;
		NullCheck(L_0);
		CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* L_1 = (CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))));
		V_0 = (CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828*)L_1;
		V_1 = (int32_t)0;
		goto IL_0020;
	}

IL_000d:
	{
		CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ___values0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E )((*(CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E *)((CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E *)UnBox(L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))));
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___values0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* L_11 = V_0;
		return L_11;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Reflection.CustomAttributeTypedArgument>(System.Object[])
extern "C" IL2CPP_METHOD_ATTR CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* CustomAttributeData_UnboxValues_TisCustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_m846F81B95C445180214406E0D355EBA8EC9644D1_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___values0, const RuntimeMethod* method)
{
	CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___values0;
		NullCheck(L_0);
		CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* L_1 = (CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))));
		V_0 = (CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05*)L_1;
		V_1 = (int32_t)0;
		goto IL_0020;
	}

IL_000d:
	{
		CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ___values0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 )((*(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 *)((CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 *)UnBox(L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))));
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___values0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* L_11 = V_0;
		return L_11;
	}
}
// T[] System.Runtime.CompilerServices.CallSiteOps::GetCachedRules<System.Object>(System.Runtime.CompilerServices.RuleCache`1<T>)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* CallSiteOps_GetCachedRules_TisRuntimeObject_mABF3A636A667403E0DCE6B9BC966E692F77EE4A9_gshared (RuleCache_1_tDD048DE084B8B75C031EEFD4B27EE52502DB9F95 * ___cache0, const RuntimeMethod* method)
{
	{
		RuleCache_1_tDD048DE084B8B75C031EEFD4B27EE52502DB9F95 * L_0 = ___cache0;
		NullCheck((RuleCache_1_tDD048DE084B8B75C031EEFD4B27EE52502DB9F95 *)L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (RuleCache_1_tDD048DE084B8B75C031EEFD4B27EE52502DB9F95 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuleCache_1_tDD048DE084B8B75C031EEFD4B27EE52502DB9F95 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_1;
	}
}
// T[] System.Runtime.CompilerServices.CallSiteOps::GetRules<System.Object>(System.Runtime.CompilerServices.CallSite`1<T>)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* CallSiteOps_GetRules_TisRuntimeObject_m1FF6E26C3CA1B8372171D824CD4115CCC4924D15_gshared (CallSite_1_t6B791A796E7920F964397D6D4A417E14EF67541D * ___site0, const RuntimeMethod* method)
{
	{
		CallSite_1_t6B791A796E7920F964397D6D4A417E14EF67541D * L_0 = ___site0;
		NullCheck(L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_0->get_Rules_4();
		return L_1;
	}
}
// T[] UnityEngine.Component::GetComponents<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponents_TisRuntimeObject_mC1990520B7718DB9F2D68839716E6853645566FC_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
		goto IL_0012;
	}

IL_0012:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = V_0;
		return L_2;
	}
}
// T[] UnityEngine.GameObject::GetComponents<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* GameObject_GetComponents_TisRuntimeObject_m199B72A002ECBCA128D9490B3B1FBE35BA0E1181_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponents_TisRuntimeObject_m199B72A002ECBCA128D9490B3B1FBE35BA0E1181_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this);
		RuntimeArray * L_2 = GameObject_GetComponentsInternal_mAB759217A3AD0831ABD9387163126D391459E1B8((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this, (Type_t *)L_1, (bool)1, (bool)0, (bool)1, (bool)0, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0021;
	}

IL_0021:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_0;
		return L_3;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<System.Object>(UnityEngine.Rendering.VertexAttribute)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Mesh_GetAllocArrayFromChannel_TisRuntimeObject_mA5F18E3462F04632978FDE240F85E28A870C2B2F_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
		goto IL_0015;
	}

IL_0015:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<System.Object>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Mesh_InternalVertexChannelType,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Mesh_GetAllocArrayFromChannel_TisRuntimeObject_mB70F49316410928344D97591B36FEF0E8F7A9F21_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_2 = Mesh_HasChannel_mF94FB364044F2A0812AF6DDDC811318159D2D4AD((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m965F3844FBD29C866754948D036A6BC6ECF89334((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_8;
		goto IL_0048;
	}

IL_0048:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = V_0;
		return L_9;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Color32>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Mesh_InternalVertexChannelType,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* Mesh_GetAllocArrayFromChannel_TisColor32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_mBD28E289F6DA9261F8B48C346E498E4CE24131C9_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* V_0 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_2 = Mesh_HasChannel_mF94FB364044F2A0812AF6DDDC811318159D2D4AD((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m965F3844FBD29C866754948D036A6BC6ECF89334((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)((Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_8 = (Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_0 = (Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)L_8;
		goto IL_0048;
	}

IL_0048:
	{
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_9 = V_0;
		return L_9;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector2>(UnityEngine.Rendering.VertexAttribute)
extern "C" IL2CPP_METHOD_ATTR Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* Mesh_GetAllocArrayFromChannel_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_m5C40565F81077409CEBD6BB7B2C5ABC02A44F0A8_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_3 = ((  Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)L_3;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector2>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Mesh_InternalVertexChannelType,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* Mesh_GetAllocArrayFromChannel_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_m2F05741DD1B1A6FA9D8A822335B3AFF732E51535_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* V_0 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_2 = Mesh_HasChannel_mF94FB364044F2A0812AF6DDDC811318159D2D4AD((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m965F3844FBD29C866754948D036A6BC6ECF89334((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)((Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_8 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_0 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)L_8;
		goto IL_0048;
	}

IL_0048:
	{
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_9 = V_0;
		return L_9;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector3>(UnityEngine.Rendering.VertexAttribute)
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* Mesh_GetAllocArrayFromChannel_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_m2A198BF0F2DF179DF0C126C5A0BAFA1B75765F4E_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_3 = ((  Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)L_3;
		goto IL_0015;
	}

IL_0015:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector3>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Mesh_InternalVertexChannelType,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* Mesh_GetAllocArrayFromChannel_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_m6941226C08A606477C40149880CDB6D9D7142485_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_0 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_2 = Mesh_HasChannel_mF94FB364044F2A0812AF6DDDC811318159D2D4AD((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m965F3844FBD29C866754948D036A6BC6ECF89334((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)((Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_8 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_0 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)L_8;
		goto IL_0048;
	}

IL_0048:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_9 = V_0;
		return L_9;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector4>(UnityEngine.Rendering.VertexAttribute)
extern "C" IL2CPP_METHOD_ATTR Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* Mesh_GetAllocArrayFromChannel_TisVector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_mBDD94A90E9F34CAC60C6B772992E35F66EF2D64D_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_3 = ((  Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)L_3;
		goto IL_0015;
	}

IL_0015:
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector4>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Mesh_InternalVertexChannelType,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* Mesh_GetAllocArrayFromChannel_TisVector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_m3CF4E55B415536795AD1C1C3B620AE9546B674AF_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* V_0 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_2 = Mesh_HasChannel_mF94FB364044F2A0812AF6DDDC811318159D2D4AD((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m965F3844FBD29C866754948D036A6BC6ECF89334((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_8 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_0 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)L_8;
		goto IL_0048;
	}

IL_0048:
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_9 = V_0;
		return L_9;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Boolean>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m4703200E8457C0A92046ED760F00CE44005EF424_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5 * L_0 = ((Caster_1_t1C42C521F7CF8631FF6985A641436B54CEE018E8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Byte>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m39405AED72DA92F26E0172BAAE2234CAD45EBB81_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94 * L_0 = ((Caster_1_tE0B5719D5D953F42A65E75E7D46BD8D7DD83D018_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94 *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Char>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m98E56B5A92D022D027A74E25FDCC3D799EAB6804_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9 * L_0 = ((Caster_1_tAFB70D9BBAD381451752BAEF28C81B52B2869977_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_mB928A3EAFC85B48CA5F8746998096D6892171B3C_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A * L_0 = ((Caster_1_t09B5032BA61F81ADC8AEF23DEF9F301CE607AF7C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___value0;
		NullCheck((Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A *)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.DateTime>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_m67EC6A4FF20B881663660072CA639825FC347F8C_gshared (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02 * L_0 = ((Caster_1_tB37D2514A59669003F7F156FB271151F0D11E5FB_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___value0;
		NullCheck((Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02 *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02 *)L_0, (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.DateTimeOffset>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_m3F6FD286745E992B6827D8C75772F7A3012CB51E_gshared (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8 * L_0 = ((Caster_1_tAD8FA143928683B1E0B6BEB460980A8543022E9B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_1 = ___value0;
		NullCheck((Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8 *, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8 *)L_0, (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Decimal>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_m27A19C22B04469C383D0777A361CC0504DBFF8ED_gshared (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD * L_0 = ((Caster_1_t58883F2D0ACC52F20C8978FC28C9C9D9CCFC69C2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		NullCheck((Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD *, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD *)L_0, (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisEmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_mFE62B63ADDBFC56BD3809BA6A7C01D084B593D37_gshared (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2 * L_0 = ((Caster_1_tAFED591EF13E015162D8B2F6F629837E43482837_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  L_1 = ___value0;
		NullCheck((Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2 *, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2 *)L_0, (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Double>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_m2642AADE370AEBFF905A6B0DA0A6259F236F748C_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D * L_0 = ((Caster_1_tF3B99FF3BBCDEA3D042AAF9F41A16C7AD4A29ED2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Guid>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisGuid_t_m5A0AFEE2BF910E98D56D0880005B1DDD51FD939C_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B * L_0 = ((Caster_1_tD296AE417E6EE7ADB8DAF202B8BC3203CBE89300_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Int16>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_m230E24E784CB02937D8335B389AEB021289B0A82_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996 * L_0 = ((Caster_1_t699B4565B14DC3E4AAE69424E8CCCB8C5F5C84BF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Int32>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mB2ED9C3B935700D4BE55749949D58FE3B63B9B55_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780 * L_0 = ((Caster_1_t847B65F78580B4C35C46212B37066290881E839D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Int64>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_m8DCE839F3A6EA158B607CC83266509F8F1BE588F_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997 * L_0 = ((Caster_1_tEE77AB8F884BD2579C99A38CFB1AAFEE0DCF07FA_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.IntPtr>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisIntPtr_t_mABB7C010A235E7F7443E34811536985C56709032_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054 * L_0 = ((Caster_1_t02312CA733627756FCC99C1ED8322D3A6C51FB60_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Object>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisRuntimeObject_mB6959F0D52C5FF6F05B485070A979E423C7C058C_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47 * L_0 = ((Caster_1_t79B0C615C852AD755B10B324A903BD8ECE30C1D2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.SByte>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m562963CD9F91D60E971EFA159959EF8A92E0C3AD_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4 * L_0 = ((Caster_1_t27F1F99B9A4CEB186ECF7805145934EA77CB1257_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4 *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4 *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Single>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m0349C7393DD78A2B9EAFD91BBD31A83D1AEF0E06_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89 * L_0 = ((Caster_1_t5908B8116E70EA9E946E9F5128B622E9063630CC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.TimeSpan>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_mA16C77DBC2AE7C44F2DD9EF81CB34C302590EBBB_gshared (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073 * L_0 = ((Caster_1_t0B12755AB11A35CCF3F2B11D0A02101A3A325F45_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = ___value0;
		NullCheck((Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073 *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073 *)L_0, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.UInt16>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_m90785014402CE39C95C6A464FF15913865F0D20A_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32 * L_0 = ((Caster_1_t408C47A521D832C453740F1E3F374FCCB5E32E8A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.UInt32>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m9BCA2BA360B336C8F1990736BDD2CD3C0532B5F9_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5 * L_0 = ((Caster_1_t674C9A8AF3118A1ACC250CBE1B160B5287944451_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5 *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5 *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.UInt64>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m2C4DC528C0AE341726424A1F3F5856B320DD6B99_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558 * L_0 = ((Caster_1_t80311815F1B7E9467CB0674AEC735F4E06AF50CA_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558 *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558 *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.UIntPtr>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisUIntPtr_t_m1E02775612B080FE1AF0FD5661569EDC66A781E0_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D * L_0 = ((Caster_1_t57C825D368DB63A6299B8DF204CDB497F51F538D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Boolean>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m192073E98ADAA1A5F226CDF612C5F4A1EA326F04_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD * L_0 = ((Caster_1_tCAA6ACA318706EA3CFC28187859C80CD568A8943_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Byte>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mB151EF5C27C8C3E67DC8EF7612BB364AF5AE71CB_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51 * L_0 = ((Caster_1_tCFD75E9DB3970A86144B6EFA3E793B6C12B52B33_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51 *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Char>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mA781CBF81CB566C5B97681482DDE49EE24BF2D39_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3 * L_0 = ((Caster_1_tDE1C83FE3C48AB3782D0BCBC7ACD4EA1700DBF59_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_mD2D22DC060CF312B9A3016DE6A971B06E2A060E7_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595 * L_0 = ((Caster_1_t6B1DD3EE8B308447896C88A6A69138BC65A5FA40_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___value0;
		NullCheck((Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595 *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595 *)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.DateTime>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_m25D70E9A31AFD54807927CE75E424595D55EE885_gshared (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431 * L_0 = ((Caster_1_t502C258C3B6A03A1FD5B2E3254072F77EE89A675_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___value0;
		NullCheck((Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431 *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431 *)L_0, (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.DateTimeOffset>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_m3C1554928412F1AFB670D5FE501C29108FD1BE6A_gshared (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757 * L_0 = ((Caster_1_t11F20427B499F3CD52E11D6A1AB7C931DCF96DB8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_1 = ___value0;
		NullCheck((Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757 *, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757 *)L_0, (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Decimal>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_m5C13043D24E9A69C7DCB2C4FCEF55CF0AF1C2C5F_gshared (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C * L_0 = ((Caster_1_tB676512E7A350DB4ED01AA9C00F5621E3A8C7F0F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		NullCheck((Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C *, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C *)L_0, (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisEmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_m4923214A4EAA4DAA4CEC11C2C911816FE1F47ABD_gshared (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C * L_0 = ((Caster_1_t8218635FFE52C666262AEEAEE207339F47173DFF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  L_1 = ___value0;
		NullCheck((Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C *, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C *)L_0, (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Double>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_mF5FF48C2DBF5A36B8C7AAEBD55DA020E48AF83FB_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497 * L_0 = ((Caster_1_t03D8E1F7D51ED3D2AE2677EDF3B6A0F0A4416AB5_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497 *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Guid>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisGuid_t_mB76EE32A727B7F98A0F65C59B00E43C0D8FB43A7_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9 * L_0 = ((Caster_1_t5932849F6E79E1885331632BE0371A5087A6DD8C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9 *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9 *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Int16>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_m8F6C334DF8F1564AB5E45BA8211EE4456CBBB231_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8 * L_0 = ((Caster_1_t1F87BBD03AF9272751C51F5D605EFEF43AB46FE1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Int32>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m1D6C095DECABD7ECA612CE50A9323CC7558CE492_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970 * L_0 = ((Caster_1_tB23D3BA31E450FB0952F33E1D2DB4DBFCD754BE1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Int64>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_mA8667973E976E623362B3916BD0A01EEFB22FB84_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4 * L_0 = ((Caster_1_tCA7F280780B937135FD0247CC90F5BCAD8963441_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.IntPtr>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisIntPtr_t_m5938B0521628AA9D2A57E92925B307C735673EDC_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231 * L_0 = ((Caster_1_t33C636F2356154C6CDFA5421A2797B1F58F30BCC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Object>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisRuntimeObject_m8EE8133972CA40759750FDFE5701582530670348_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F * L_0 = ((Caster_1_tF7A61263020C72F89182A7A8527DE53779F6D045_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.SByte>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m93E20FE7F1103F6F41FD560C2458DD73F85633A3_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048 * L_0 = ((Caster_1_tE4ED47E76B44B007CC692D239C61ED53AE3DEC20_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048 *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048 *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Single>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mD0181E906F9F43D543F29CE6062EB5408367D10C_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t761E0F084572634E94674D7C1912B56771C73045 * L_0 = ((Caster_1_tFFE1731A5A18D2FC62FB4FD0E140F893FEFCBFBC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_t761E0F084572634E94674D7C1912B56771C73045 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t761E0F084572634E94674D7C1912B56771C73045 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t761E0F084572634E94674D7C1912B56771C73045 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.TimeSpan>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_m69F9C79C03AB361FF42EBA7B6B818AF9BC434D35_gshared (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A * L_0 = ((Caster_1_tE7B6AE02946C8C7D035775855D3F8667EECF49F0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = ___value0;
		NullCheck((Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A *)L_0, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.UInt16>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_m98848A814468F001D1BAE2AC1382BB04F4B9A0FA_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77 * L_0 = ((Caster_1_tAB8276A53DE8D0B71D0C922FBDC1EA643B4B0801_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.UInt32>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mB30F83D8D6EF175B27FD93FA87B6997566BDC30E_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32 * L_0 = ((Caster_1_t46C35E368FA9C3535F632F4A43107C8C0DECDF2D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32 *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32 *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.UInt64>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m40973C82E1D5B4B70939CE0007C506D0AB05F808_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984 * L_0 = ((Caster_1_t0DD4ACB69C178BCC9281945CB5322037FF50ACD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984 *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984 *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.UIntPtr>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisUIntPtr_t_mB8B15AA4089033746DB5FC9A7D782222FA37760A_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20 * L_0 = ((Caster_1_tAB93366D39B91199FA6BB514B138640EEA06D826_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20 *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20 *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Boolean>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_mD87021825E28AB9152A64711E36E831AB5BC1A69_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B * L_0 = ((Caster_1_t48A24901856804183E97D899F37E2B095C3D3AD0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Byte>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m904BD89D0794EDD4BA1ECD63B007E98198FE842A_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C * L_0 = ((Caster_1_tB8F12CF62FE2B524624E09DCE78970BE6555258F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Char>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m250DB1C0688ED8987DEA68C8B4005B4C94701E81_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95 * L_0 = ((Caster_1_tD430240C674256CDF3116A5E5C05D32D14ADE25B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_mE245467808C465EB51EE6E7A6D381E77C35886C1_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE * L_0 = ((Caster_1_tA4C9DBDB9984A7DBDBE1E328A1E6D32056B598D5_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___value0;
		NullCheck((Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE *)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.DateTime>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_mE31527D1BE35D2661853F15F4C0D708E9C0B8FD9_gshared (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A * L_0 = ((Caster_1_t910ED4892D830D9260544CCD5A5BA17D0EAAC5A7_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___value0;
		NullCheck((Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A *)L_0, (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.DateTimeOffset>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_m9DE76E933754179F978E8996F91230BAC513DE6D_gshared (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79 * L_0 = ((Caster_1_t3B656E50540D77F8D98EC3723A33AD022BA02142_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_1 = ___value0;
		NullCheck((Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79 *, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79 *)L_0, (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Decimal>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_m6B23A7ADD84FEEFE2CF495A10C5F7F8A237F12F8_gshared (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4 * L_0 = ((Caster_1_t37CFBE48D145A145182032241D4C96C7A9651872_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		NullCheck((Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4 *, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4 *)L_0, (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisEmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_mE33D0543DFD396F129480CE6EBB5AB7ED4953C63_gshared (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8 * L_0 = ((Caster_1_t6C69308FA9D7112A4603D39468BDA09974918F69_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  L_1 = ___value0;
		NullCheck((Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8 *, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8 *)L_0, (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Double>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_m18B425A1BD292BF835CD978A840B2B0495672AB6_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B * L_0 = ((Caster_1_t667DCCFE8DA1234CBF65A5978B6D27BE63CD598A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Guid>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisGuid_t_m929A4D0FCC3C16092FBF35AB0C12A9A3C4ACA976_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05 * L_0 = ((Caster_1_tB84AF4B31F4DAF0AB144E99A83CE997FB4C72D58_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05 *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05 *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Int16>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_m79C33E1C8F36629007121977ACA4722E2BFB97A5_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0 * L_0 = ((Caster_1_t10436C94D617CD0D6ABB2F7D073CFA27B74C1E30_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Int32>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m3352690FD9B7810E53BD0226ABA15061DABC3861_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6 * L_0 = ((Caster_1_t14BB827E485FED333B17154453079AE34F1F49AD_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Int64>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_mCE856A4A6FA913D30106882D36D439389EBED04F_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2 * L_0 = ((Caster_1_t7A312140662B26A86CC59C245C7C848163A49AB4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.IntPtr>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisIntPtr_t_mCFDB3D5473BAE1CBA9286BB2552E06C1C389121A_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A * L_0 = ((Caster_1_t9C36147697AE67003B8A0EF11EEF2516066D90C4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Object>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisRuntimeObject_m5381A5A027D55D6BD1F5AFEFDEFA4F6045D163AE_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848 * L_0 = ((Caster_1_t31EFD992543429652A6ED1652D545CCD372DB7C5_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.SByte>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m60FDEFA18A26FD45A8D1668C7844B4EC02D525B0_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF * L_0 = ((Caster_1_t9347D88993875351431679E4107168C7CD28B825_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Single>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m120DF6B1F211DE3BB1CB7D07FEF84C22A6704F3F_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B * L_0 = ((Caster_1_t3EA25BC7E67BA9A7DA94FB04B9939AA009AE1F2D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.TimeSpan>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_m77E6D4B131D8064BC00515F25FC3D872D1F189D1_gshared (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94 * L_0 = ((Caster_1_tFDA8B5B6F494CA32867BEDA1744607B9DE4AC7FD_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = ___value0;
		NullCheck((Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94 *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94 *)L_0, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.UInt16>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_m76AE6217EF496F71CA44BF726149CA82CA98A851_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9 * L_0 = ((Caster_1_t5A5C0360CA0AE23E50B74262E52C01F758755C97_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.UInt32>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mCF05B647DA52B81D78F7C1C9E805162DCC534EC0_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE * L_0 = ((Caster_1_t3A7D9F3C5EC2EF5D573D0A6E3F67BA58C73B050A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.UInt64>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_mD9ACCDE304740CCDD7DE5D3061FEBA4751A50AAD_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D * L_0 = ((Caster_1_t5606234865DF0152C73166D640BD2651AAC8D43E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.UIntPtr>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisUIntPtr_t_mCF8F606BDF81C71855C4901A31FE3DDE2B41D07D_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A * L_0 = ((Caster_1_t0233A96550545D6F17A5141586520D492131F3AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Boolean>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_mB862CD59E18B5D6DE3975635D248445FC1DCFEDC_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82 * L_0 = ((Caster_1_t78D880B4DED6A81AFFB3DA6D32BA8A0E295F3788_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Byte>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m767C2FDFF9ED64B0241800DCD45D84B6C424BBAF_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673 * L_0 = ((Caster_1_tF1E9F5ACC455E168230D60D0AE5E848A5DBE2930_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673 *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Char>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mCA8359EA41F7B4D4F0334509E5C772674870DF27_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66 * L_0 = ((Caster_1_t95AC156F3D75823ABA3B6749B8E5DAAF8EB6AB25_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_mDED6BE58F3B45FF48522331B6D37042116DC852B_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6 * L_0 = ((Caster_1_t8B6EA4487FE31C415BCD954287C70DF849E09E08_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___value0;
		NullCheck((Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6 *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6 *)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.DateTime>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_m7AF2CC9A88EF6C7BA7062CBC9E6671DCFDDDE6C4_gshared (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE * L_0 = ((Caster_1_t2314A24A7931390C6867F5AB59BCE7DF7875EDB6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___value0;
		NullCheck((Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE *)L_0, (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.DateTimeOffset>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_mA79E752D231DF346C6FDB3DB95DC5E91D1E994D5_gshared (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7 * L_0 = ((Caster_1_t39143C74EFB8AD6200EFEE9E31A9EBDC9718F1E5_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_1 = ___value0;
		NullCheck((Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7 *, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7 *)L_0, (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Decimal>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_mF70A048030A6D511CFFA1F5C68CDF76AF0817985_gshared (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2 * L_0 = ((Caster_1_t4B1D64CB72ED6461809D48568ECB009A92F781FE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		NullCheck((Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2 *, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2 *)L_0, (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisEmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_m438A2CEB68A593F5B57AC0CC95CCBDF3E5746A53_gshared (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D * L_0 = ((Caster_1_t279DFE68F30E6659059D94B02BD5361A9BBE40D4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  L_1 = ___value0;
		NullCheck((Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D *, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D *)L_0, (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Double>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_m576C2E63208E9FA2318899CD5A9E0CD526980673_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A * L_0 = ((Caster_1_tFFC10B3F233B81FE8D4EA64668FE2EA15A433C6D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Guid>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisGuid_t_m0AB9E683843C5F8026B4BE353B704B9C0445562B_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0 * L_0 = ((Caster_1_t7F15074A7BC9B5DA634F74067B2CAA3E4D8C7379_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0 *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0 *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Int16>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_mC7DC8A4161C7584AECE6AF041D57B381EE5A477F_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071 * L_0 = ((Caster_1_tE25B230380E2CE54B9276690CD814DE511450833_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Int32>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m037FE224C3CFAAD3497F4B3F31C82178225B384B_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91 * L_0 = ((Caster_1_t3B87E9C89959ABEE4F6F1172FFA2D99D20FEAF4D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Int64>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_mECC8829C16BE4538050F0A94F292AB8BC5EEE745_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96 * L_0 = ((Caster_1_t7D3ABA04133A298DFD0422ADFEBDEF3656AF0031_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.IntPtr>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisIntPtr_t_mA69192E793A3C7BEE631D420533AFFBBEE0E6F70_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171 * L_0 = ((Caster_1_t9E4D034C656C467484BBD42F5B9FF5B91F790BED_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Object>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisRuntimeObject_m9841D59B401BD9CBB358259BD32F5CE8276474C0_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D * L_0 = ((Caster_1_t7F4B7F98CCD80CC0E1B52334B484C566B3772846_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.SByte>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m053631F41BC7D2E505B1600D5DF0B87718AC9F26_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31 * L_0 = ((Caster_1_tD1867CCD99C0E4D6779357AA6EAE58CA54AE0AF4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31 *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31 *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Single>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mD79C3D4ADCAC01009016633870F0F851B99BD7C7_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5 * L_0 = ((Caster_1_tCADDC259BB0BC859D77522BE7660068F2B40F0FC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.TimeSpan>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_m5562E71891F3CD5A26093B67877C592DC57BF410_gshared (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99 * L_0 = ((Caster_1_tB392A04593C4239456BD2F10286A27F0AE928679_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = ___value0;
		NullCheck((Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99 *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99 *)L_0, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.UInt16>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_mD5B60AFDB1E022C0979DE3346D185C44D2022A2C_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95 * L_0 = ((Caster_1_t9F5AB8620B99DD3C4BBDD28E6F5A78003016D254_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.UInt32>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mB6D6836EC3E9686143CEF67C24015E934AFFF69D_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE * L_0 = ((Caster_1_t5F92169CA22878B796AF5109203D193F987A4A39_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.UInt64>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m17B3592AA114BB4F62C43FBE77386893E6A81672_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B * L_0 = ((Caster_1_tF96225B214D9B7EE71FE55E75A65EBD3AFEFAB6C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.UIntPtr>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisUIntPtr_t_mBC233F334A4E586EC36F2284329A6B2E317ABF44_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66 * L_0 = ((Caster_1_t02CDD619AF43E06FEDAB4F242EB5DAB284E98B19_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66 *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66 *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Object>::Cast<System.Object>(ValueType)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * EnumHelper_1_Cast_TisRuntimeObject_m14B8662697DCB26B5CE66EFF6D0A9BA01937351F_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA * L_0 = ((Caster_1_t195DBA8A516B142DCC1ACA2DA98380583B5F1D8E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Boolean>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_mAE533483D2EB9736CA5036F45470ADB1E9F54524_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7 * L_0 = ((Caster_1_t9548AD2802014C51CE95C2D167F4C5AFF00F7AB0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Byte>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m9C053DC9213280343424F5D4E6CA5412421EE9C1_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE * L_0 = ((Caster_1_t6D09AA62870A76ABA6E5E4D301AFCCF93F194424_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Char>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m76E7947556939FCC5864462556D6EABBED1A2885_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E * L_0 = ((Caster_1_t7BED5C159FA7237F00FC5BF1362A67DD3DEE749A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_mFEFA14B14A9E77A4CE09CAE160CF3D675326177F_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D * L_0 = ((Caster_1_tFE5F9417466A4CB788D519C7878ECCB397E668A1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___value0;
		NullCheck((Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D *)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.DateTime>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_m673C9F8CB81B95A3CB90E49ABBE57EF86259907F_gshared (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0 * L_0 = ((Caster_1_tB027436891672D8E446545806D30A74D601A125F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___value0;
		NullCheck((Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0 *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0 *)L_0, (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.DateTimeOffset>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_mC26286A6D4E8B13D974E305ED759B60852346A79_gshared (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324 * L_0 = ((Caster_1_tC50D5F2635E0A7DCD57C363B1CA71CFEA00F93EF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_1 = ___value0;
		NullCheck((Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324 *, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324 *)L_0, (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Decimal>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_m740C047BDE43758747E4B36E049DC0AE266AFA60_gshared (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6 * L_0 = ((Caster_1_tE749C798EEF25AA04DF0E56627917C360336EBA4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		NullCheck((Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6 *, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6 *)L_0, (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisEmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_mECD8FBA0366809F56BB17362A9D59211AE7C3285_gshared (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53 * L_0 = ((Caster_1_t70BCB30FF0C2DF9E545F34DEF21271408068477F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  L_1 = ___value0;
		NullCheck((Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53 *, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53 *)L_0, (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Double>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_m51A5D50B60E6833C3719179DAE4C745C4F72C18E_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601 * L_0 = ((Caster_1_tC218F4859CF65473DA915EE5333EFDCFEE72392E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601 *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Guid>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisGuid_t_m0FE9A2031A026A598CD001010D084B0045B6A34D_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463 * L_0 = ((Caster_1_t8409BE0ECE6FE2A29D79E7044752D251CB863421_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463 *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463 *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Int16>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_mF38F852ACA2D84A5A751E725A2BD6E8075EAF7BF_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4 * L_0 = ((Caster_1_t62F9F0EA0D2CF70BE880EC5B4DB6C4E3BD191FF1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Int32>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mDC45B432580ACAEF29CFB6EAD130C43FD4EE2EE0_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60 * L_0 = ((Caster_1_t12F7AE622EDC8B8147BB5162376EAEBD2A1A716D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Int64>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_m02A2989AD15E5C61CC8170CC360AD7D12462E6B0_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084 * L_0 = ((Caster_1_t9136EB8D74B86E14C4D0B7DE2699BB30FF62ADE0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.IntPtr>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisIntPtr_t_m10DFA878C4388DB28234BEDE38F5B5102467D111_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831 * L_0 = ((Caster_1_t3AEE07159271C04282D4520F761455EA4BF25B90_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Object>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisRuntimeObject_mE1FDE0675779B26082666516C621FEC19B207148_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49 * L_0 = ((Caster_1_tDE4AB1F4E3BD9C2B0BF368F239F02CD0D92D7D3B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.SByte>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m8ADF6B2EB361F9687FF8AD704E272E4CC73B65DD_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5 * L_0 = ((Caster_1_tCC08F4371265D272EC5F5C61F06234FB4C49F905_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5 *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5 *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Single>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mC50E5A46276EEA9830E1DC4EE36D82C22F66C64A_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867 * L_0 = ((Caster_1_tB1E0520D57EA2A38EB25F38157F7FAE2077D0519_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.TimeSpan>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_m136ECC8F15796D07201EF82AB5087C8577204CE7_gshared (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80 * L_0 = ((Caster_1_t063FFE54B6E834FCAADA9B98B6556AFEC0411632_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = ___value0;
		NullCheck((Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80 *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80 *)L_0, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.UInt16>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_mB9241B4372765DCC3E2FB1E580E530F582D1DC42_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC * L_0 = ((Caster_1_tA4C712C2F66B1CCA6198D56E9156B3ED627F7E7F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.UInt32>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mD1099AA921562AC8786F080BFFE193F342C52968_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3 * L_0 = ((Caster_1_t4E01ADD98CF6A52B499B239DD79900153A6E8CB9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3 *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3 *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.UInt64>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m2D0D20AC9F0E60DE8262A897B6FE18ED9D025C75_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023 * L_0 = ((Caster_1_tA76F3CD44521225217CEE9D5E70655913B3652F6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023 *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023 *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.UIntPtr>(ValueType)
extern "C" IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisUIntPtr_t_mD2B5AC3EAE3E39B8293CD9DC72D51C837C0783F5_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1 * L_0 = ((Caster_1_t27A7F78CA974CB9EB88650C0F7D4CCB345E0D6F0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1 *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1 *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Boolean>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m3B872FF621B738CE1DF433FB14FE279F77DB875B_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968 * L_0 = ((Caster_1_t2AC7FD1B9C92018FCD42D2FBB7DE1C15E7C6141D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Byte>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mDA9B765AC14F77C923A7CDB3C0D706221CFD15E5_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F * L_0 = ((Caster_1_tA9F99D3DE3C2B79878574DA79394D40484CF909C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Char>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m08A6E25B90A3E4623E4D4C20C9BDED75E046317C_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769 * L_0 = ((Caster_1_t439110BADC840296B0301DC221E3742B2C8E8934_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_mC622F6D0E6E8E105E53938B01F21FBBE3929BE59_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195 * L_0 = ((Caster_1_t9CF680A45E2713569B0D6E5DCD3ACE8E5CE11A5F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___value0;
		NullCheck((Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195 *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195 *)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.DateTime>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_mC92B8CBBB0C4B10ED4E2450902EE2786DC858170_gshared (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56 * L_0 = ((Caster_1_t45EEB8AA14910B5FE2FEA34EC88A9154085E86BC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___value0;
		NullCheck((Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56 *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56 *)L_0, (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.DateTimeOffset>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_mA1D9F1862F772E31942176AD3F8CD00167E46851_gshared (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01 * L_0 = ((Caster_1_t0AD7C98192FA0900645BFF7111DF2264C1F11843_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_1 = ___value0;
		NullCheck((Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01 *, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01 *)L_0, (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Decimal>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_mCD324132C02011B0B32CCC47A4808A77236AED44_gshared (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC * L_0 = ((Caster_1_tB30E4B83744A2AB4B34E2140F09FF2DBAD9067A2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		NullCheck((Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC *, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC *)L_0, (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisEmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_m9B67538CB09A9BE23FFCE9BEC85E666C9A431017_gshared (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5 * L_0 = ((Caster_1_t9F48A0F7F413295607FDDD8C95EAA2A8FB1BA77F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  L_1 = ___value0;
		NullCheck((Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5 *, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5 *)L_0, (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Double>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_m47C7D923FD0FB3DB00E561558507770017AE9BCE_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1 * L_0 = ((Caster_1_tFA61F79F888D97CEE77D5548328774BE7E4EB84A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1 *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Guid>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisGuid_t_m654610841B56D96AD377D93B265DFEA5BCCD849F_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760 * L_0 = ((Caster_1_t62DA063BB7BB019FFBE6B9ED3A08D069E330FE87_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760 *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760 *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Int16>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_m68BD7EC0E8A27ABE7F05B6775C994BBF0AC9CF61_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8 * L_0 = ((Caster_1_tF5CE3C0B8FDD93C834FC13D907003475F7844594_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Int32>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mFD2ADB5D6FF91AD34628103AB08D7D69E52B3F80_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5 * L_0 = ((Caster_1_t8F8BD84B7E2CC9232254A7A82FBEA7C1C7227E24_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Int64>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_mDEB00F12BF02652DD353CC17480C93E61DAD532F_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551 * L_0 = ((Caster_1_t7796DD6DA3A2E903A8337A4426EA117003E4FF07_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.IntPtr>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisIntPtr_t_mA4FC52AC62D68943074BF8C0C5BFD283DBCC73D0_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t873B2E4C2418F756278367655E1C64D654382460 * L_0 = ((Caster_1_tF06869CDE05BEA07C45D10B5C27C152492D8F494_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t873B2E4C2418F756278367655E1C64D654382460 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t873B2E4C2418F756278367655E1C64D654382460 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t873B2E4C2418F756278367655E1C64D654382460 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Object>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisRuntimeObject_m33C8E0733764B34A5BCE1F2E6AFB8C155F39BEBF_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37 * L_0 = ((Caster_1_t0E97020316A62558167F5F018A989125D28729AD_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.SByte>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m0E9A83FB710C70A26B0CCECD93E36054FD591BC6_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A * L_0 = ((Caster_1_t7194A004154AABF5CF224780C51648A67A6757A2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Single>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mCF0D075974C55087E231D074BC65919B184F61B0_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1 * L_0 = ((Caster_1_t073650CFFC30F591C4E5B47753CBDF6EAEC9AA0D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.TimeSpan>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_m2B04CEE74D1BE3CF4EDB28113F73829B46C02053_gshared (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE * L_0 = ((Caster_1_tC9893BC43C67D8FE44500C545C7D0B22FBDFA338_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = ___value0;
		NullCheck((Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE *)L_0, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.UInt16>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_mD814412C42F9D58EA1FDD6CE78D85CD7912178EC_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62 * L_0 = ((Caster_1_t97E30322734EE96D22D5EDDDA8A32D7F28BF9E0D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.UInt32>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m569864A50A8516B4ED140C81F5208CAF8ABE5054_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C * L_0 = ((Caster_1_tEAB5EDC98E125207E56614BEDA0E194CDB6A81D2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.UInt64>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m10412A2B6C85347835984822C2FA20E792A40553_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD * L_0 = ((Caster_1_tE1468C16E0D935665BAFEAE58EC1DC80FEA18FD0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.UIntPtr>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisUIntPtr_t_m4C89E4587F264A9DCAD1F7C77B9D279AA1CC44D1_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78 * L_0 = ((Caster_1_t9DA7DEC0029E18FF11AF097849FFE2FD2B961C60_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78 *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78 *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Boolean>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_mE45474D78C9C75421B50BA3B6F0D8A036086E3D4_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691 * L_0 = ((Caster_1_t1B6BC63943ECA453AF4038A2F429DC89D1C88504_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Byte>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mA021FB7B9377D61AD510EFEE22C14B074DE4A97C_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899 * L_0 = ((Caster_1_t1E5C78F2324B0966F93815A21CF15C56A6D1D763_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899 *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Char>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mCB509FD508A9096FD819CB976FCE17421E34AD79_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4 * L_0 = ((Caster_1_tEED0D769437F89233D231DC79626AC0A6337593C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_m3214E0BD22A7B25FE44C18CF248F52316E7BC735_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA * L_0 = ((Caster_1_t722135795C75F590A8BC1E4CE7DB7DDFFA14314A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___value0;
		NullCheck((Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA *)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.DateTime>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_mB9853A7D22563E8B8B771F5876882C9B092C5B20_gshared (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52 * L_0 = ((Caster_1_t3F3455CCFC9311D353A7D8C4A42200408CA558BC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___value0;
		NullCheck((Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52 *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52 *)L_0, (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.DateTimeOffset>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_m7D5EB067A14234897ACF89E7DF83657410CC2A50_gshared (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62 * L_0 = ((Caster_1_t2EE1EC204134DA58566A851DFA40A0B880948A86_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_1 = ___value0;
		NullCheck((Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62 *, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62 *)L_0, (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Decimal>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_m31875099D68E21BE514D36A42DE21BFB3C26AB90_gshared (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC * L_0 = ((Caster_1_t0BBCE2A7CB1298EE3E1F92A4EE98EE1FEA34EC7F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		NullCheck((Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC *, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC *)L_0, (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisEmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_m52991F9C4A2BAFC16B33C6A3C863FF0EECE550DE_gshared (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56 * L_0 = ((Caster_1_tEB26AB756A5FFD5D46CEFADFD4354B569FE79E35_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  L_1 = ___value0;
		NullCheck((Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56 *, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56 *)L_0, (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Double>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_mE4FDEAE7059AF2D9FAFF04E2F28F252697F34DD3_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6 * L_0 = ((Caster_1_t4EF5B9F285768775D3C068FAF5475BD3A7560098_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6 *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Guid>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisGuid_t_m6635AF97CD8EFCDC822515F565C0503A6035A773_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E * L_0 = ((Caster_1_t82D455B6810AAD5E0FB1B33CBEAE2D7F6B1215C1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Int16>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_m3A03746E9FB5A67E1FAFBC546A726D7D461367CB_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4 * L_0 = ((Caster_1_tFBB6815F7209EA2669845E4F5390708755B6A996_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Int32>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m817E92EDAC63A713BB5FC2374E08E7999D44CC40_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C * L_0 = ((Caster_1_t79F9BB0534172847D8A8840D22FEA3ACBF6E2E30_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Int64>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_m802F634F8484AA08CF5375C2FA35BFA704082BEC_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D * L_0 = ((Caster_1_t2E73FCE9B801A6C9D2357B69DB15EE7FF8CCDBD8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.IntPtr>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisIntPtr_t_mB193F58608DFB76891B646A614E6FFA5CAF045AC_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9 * L_0 = ((Caster_1_t7428F42D13DDC0C1A066BD1EE9BC521E66BA5BC1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Object>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisRuntimeObject_m2FF75954BEE32E7CBA81F696CFADEB32570A5295_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA * L_0 = ((Caster_1_tB69CF02AAB845E9B3DDB7E61DDA09AE13B6C05C2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.SByte>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_mB1165679FE03D30141CFB54B4E2BE302E9BA770A_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512 * L_0 = ((Caster_1_t5B781D2583194FDAD58A1DEB85D1364FB241544E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512 *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512 *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Single>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m70BC7C784870C55D1141CCE9A5418C9043782C55_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D * L_0 = ((Caster_1_tFB47F8B972002AEAC72800811486FA13E467A8BF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.TimeSpan>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_m29031690307B405A095E8E3B3592FF735CA185CF_gshared (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4 * L_0 = ((Caster_1_tC8767D376B189ACD381153C9C173514211A0FE0F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = ___value0;
		NullCheck((Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4 *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4 *)L_0, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.UInt16>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_m12942B34C5E83255DBD90AEB2A90B3E7951E8864_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6 * L_0 = ((Caster_1_t42992A2C9D038623500C211031C77C7208D43273_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.UInt32>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m71AFD836AA7C64489EEF9407F203B4EC27425961_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A * L_0 = ((Caster_1_t87A4B6548293C1368DDFCB40BA06CF49106148F9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.UInt64>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_mE1C98F17A06AA92C3F21999A6E0FFE8EBEE7EC00_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211 * L_0 = ((Caster_1_tFD458BDD72B070794987225E3DB7C380E3CC37D2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211 *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211 *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.UIntPtr>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisUIntPtr_t_mE20967A9C6BCC22F95A0C0F33954E8F20C099B10_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD * L_0 = ((Caster_1_t941B28C129B116297C114C4519CDE8190AB5C2D9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Boolean>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_mA6D4DB9B4A0AEBFDB545206DD5F50F1B3B99E137_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5 * L_0 = ((Caster_1_tD2A776BD441B8E1E656DBDBEA29CE09F6370B01D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Byte>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mBB6EBFF5DB5352C897AF4E4871D475088E798CE8_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF * L_0 = ((Caster_1_t482CB7C00B7672BE86AB37B58803EDDA5253C159_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Char>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m9A4AE5F28B661AB3608A08D4A008C6EFD59C8EF3_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9 * L_0 = ((Caster_1_tC3C7676E4988AB84AD5D483DF6D6D51F652B8EAA_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_mBE29FD6567FF1B7F5CC17B11E8A50CBCB4E457F8_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA * L_0 = ((Caster_1_tAEB42C1C02AED929BC1BEC04D98C0DF0C1BEFFC8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___value0;
		NullCheck((Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA *)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.DateTime>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_mAC44106BE1CC32C04B8323E028317909E16DE5D9_gshared (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3 * L_0 = ((Caster_1_tCDE1BC83F41D1B9514A301F4F689ECD00B852E4B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___value0;
		NullCheck((Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3 *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3 *)L_0, (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.DateTimeOffset>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_mA92902179E75C6237A1FAF1A93DBC8A54C3D9F1C_gshared (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60 * L_0 = ((Caster_1_t648D614B6DE9FA1B879A571830C1B8BC23894BC0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_1 = ___value0;
		NullCheck((Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60 *, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60 *)L_0, (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Decimal>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_mD190CF4C4FFCF5CF0B55A6551271A963D62BACB4_gshared (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220 * L_0 = ((Caster_1_t4F5F7A38C557F7B9436C5C1F5FF63A6B645F482C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		NullCheck((Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220 *, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220 *)L_0, (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisEmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_mD96A07754EB55396C0767DDFF0990FDE4642BA5C_gshared (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F * L_0 = ((Caster_1_t816F760E4CB91E8ED4749C51E1906DAA5FBFCBDD_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  L_1 = ___value0;
		NullCheck((Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F *, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F *)L_0, (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Double>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_m89DE2BCD31E38F694C6C046DD591D93E6A4905BD_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082 * L_0 = ((Caster_1_tCA85C27159D944B0FA3E9E3AF4E43F1301C0856A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082 *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Guid>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisGuid_t_m6A79FE5AAC75B2E933B0F2DF4316BDA9E79E6848_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4 * L_0 = ((Caster_1_t32E967508060A04E0F6F4A5A9E516B2751446098_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4 *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4 *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Int16>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_mED333DF6FD1DC9723DE9E7A47A894EF358196150_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C * L_0 = ((Caster_1_tF3538AE7B545B5E66C20C4C751A1EAEE76E82FEF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Int32>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mC432022B01CCED53D1279F08CCAAB4DBB83FBB41_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731 * L_0 = ((Caster_1_t053E7CA3C6B09080F453D7B9ADCED0B07B7355B2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Int64>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_m51B47E785BA2597ABFBD0A9E7CAEBF2ECF1877AC_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71 * L_0 = ((Caster_1_t3DD97367B1E8C9F032197273CF90E5919C74B518_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.IntPtr>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisIntPtr_t_m1BE5340DBEDC930432982B6738A5820A9A4FCD42_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14 * L_0 = ((Caster_1_t3E5340F9C3D63DE7B3280B37BCD14B25362CC87E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Object>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisRuntimeObject_m24E9DBADCE63823F1FB2AA2A116982AD2BEA67FF_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B * L_0 = ((Caster_1_t1C8C6FEDED1BBCC86BF7F183BAAA65A65E37F6B9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.SByte>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m40171CC2B05F787A453D415B7B354C70FA91EB3C_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 * L_0 = ((Caster_1_t261B67D54DDBEE2E45C594357E6132EBCFC20C43_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Single>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m08399F0F8C4F12BD2E29A845B2D5F7796C41B29E_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 * L_0 = ((Caster_1_t758D846F58655E22B936DD8A2DB64283EA3805A2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.TimeSpan>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_mBD8CF0C29D9F8046510C4F5872622EB351F706AE_gshared (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F * L_0 = ((Caster_1_t01551B272EDA007DB4640BBDA9745FCD8150E90F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = ___value0;
		NullCheck((Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F *)L_0, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.UInt16>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_m663895C442194B5C317393C7D716656B08408CAE_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 * L_0 = ((Caster_1_t927662BF5FDD93421514AD6DFF5810834FC65437_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.UInt32>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m3A2842E06D5905F6E685A3033ECE6BB76E8912CF_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 * L_0 = ((Caster_1_t4FBD60419DE1522A1D8D6D26E18CCE6C5CBE862C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.UInt64>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m4F2C115C6D08D4097EC80756F75A08786FF84C9B_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE * L_0 = ((Caster_1_tCD382BFE18B540FD55BB3D1DE0739E2718F2B9F7_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.UIntPtr>(ValueType)
extern "C" IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisUIntPtr_t_mF6BC18592D238BE188D32FDF0722A5D2882A7763_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 * L_0 = ((Caster_1_tE9665C2AD78EA0AECF9AA50DC59E256EA789B56B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<T>)
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m00DF495FDAFA66A78A4B175A094C644FB5D901D5_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, EventFunction_1_tC8BA6CC6AE9BBB9A4F9703E7EA47532F813105B0 * ___callbackFunction2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m00DF495FDAFA66A78A4B175A094C644FB5D901D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_1 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_2 = NULL;
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * L_1 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		ExecuteEvents_GetEventChain_m640191F67AEB374A5E6FD9B1E6CC48CF31FFDCAD((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, (RuntimeObject*)L_1, /*hidden argument*/NULL);
		V_0 = (int32_t)0;
		goto IL_0043;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * L_2 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		int32_t L_3 = V_0;
		NullCheck((List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D *)L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = List_1_get_Item_m6FBF36E821E762256C887A96718EC1B49B67EA8D((List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D *)L_2, (int32_t)L_3, /*hidden argument*/List_1_get_Item_m6FBF36E821E762256C887A96718EC1B49B67EA8D_RuntimeMethod_var);
		V_1 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = V_1;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_5, /*hidden argument*/NULL);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_7 = ___eventData1;
		EventFunction_1_tC8BA6CC6AE9BBB9A4F9703E7EA47532F813105B0 * L_8 = ___callbackFunction2;
		bool L_9 = ((  bool (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_tC8BA6CC6AE9BBB9A4F9703E7EA47532F813105B0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_6, (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *)L_7, (EventFunction_1_tC8BA6CC6AE9BBB9A4F9703E7EA47532F813105B0 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = V_1;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_10);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_10, /*hidden argument*/NULL);
		V_2 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_11;
		goto IL_005a;
	}

IL_003e:
	{
		int32_t L_12 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0043:
	{
		int32_t L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * L_14 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		NullCheck((List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D *)L_14);
		int32_t L_15 = List_1_get_Count_m4413771DE3FCE90800D60FBAFA5909A8E5E4F917((List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D *)L_14, /*hidden argument*/List_1_get_Count_m4413771DE3FCE90800D60FBAFA5909A8E5E4F917_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0013;
		}
	}
	{
		V_2 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		goto IL_005a;
	}

IL_005a:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = V_2;
		return L_16;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<System.Object>(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ExecuteEvents_GetEventHandler_TisRuntimeObject_m254A7FA10E4BFC952CF3E997AF14092C337943B6_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_GetEventHandler_TisRuntimeObject_m254A7FA10E4BFC952CF3E997AF14092C337943B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_1 = NULL;
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		V_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		goto IL_0058;
	}

IL_0014:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = ___root0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2, /*hidden argument*/NULL);
		V_1 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_3;
		goto IL_0045;
	}

IL_0020:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = V_1;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		bool L_6 = ((  bool (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = V_1;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_7);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_7, /*hidden argument*/NULL);
		V_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_8;
		goto IL_0058;
	}

IL_003d:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = V_1;
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_9, /*hidden argument*/NULL);
		V_1 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_10;
	}

IL_0045:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_11, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0020;
		}
	}
	{
		V_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		goto IL_0058;
	}

IL_0058:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = V_0;
		return L_13;
	}
}
